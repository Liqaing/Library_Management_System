#include "Database.h"
#include "Struct.h"
#include "sqlite3.h"
#include "Linked_List.h"

// Forward Declaration
template Node<Book> *InsertLinkedList(Node<Book> *head, Book data);
template Node<Book> *InitializeLinkedList();

const char *LibraryDB= "library.sqlite3";


void InitializeDatabase() {
	// Database Connection
	sqlite3* db;
	
	// Create database
	int result = sqlite3_open(LibraryDB, &db);
	if (result != SQLITE_OK) {
		sqlite3_close(db);
		return;
	}

	// Create book table
	const char *createBookTableQuery = "CREATE TABLE IF NOT EXISTS Books (Id INTEGER PRIMARY KEY AUTOINCREMENT, Title TEXT NOT NULL, Pages INTEGER, QTY INTEGEER NOT NULL, Author TEXT)";
	result = sqlite3_exec(db, createBookTableQuery, 0, 0, 0);
	if (result != SQLITE_OK) {
		return;
	}

	// Create Student table
	const char* createStudentTableQuery = "CREATE TABLE IF NOT EXISTS Students (Id INTEGER PRIMARY KEY AUTOINCREMENT, Name TEXT NOT NULL, Age INTEGER NOT NULL, Gender TEXT NOT NULL, Department TEXT NOT NULL, Telephone TEXT NOT NULL)";
	result = sqlite3_exec(db, createStudentTableQuery, 0, 0, 0);
	if (result != SQLITE_OK) {
		return;
	}

	// IssueReturn Book table
	const char* createIssueReturnTableQuery = "CREATE TABLE IF NOT EXISTS IssueReturn (Id INTEGER PRIMARY KEY AUTOINCREMENT, BookID INTEGER, StudentID INTEGER, IssueDate DATE NOT NULL, ReturnDate DATE, Status Text NOT NULL, Is_Borrowing INT NOT NULL, FOREIGN KEY (BookID) REFERENCES Books (Id) ON DELETE NO ACTION ON UPDATE CASCADE, FOREIGN KEY (StudentID) REFERENCES Student (Id) ON DELETE NO ACTION ON UPDATE CASCADE)";
	result = sqlite3_exec(db, createIssueReturnTableQuery, 0, 0, 0);
	if (result != SQLITE_OK) {
		return;
	}

	sqlite3_close(db);
}

// Insert Book into DB
void InsertBookDB(Book book) {
	// Open Database Connection
	sqlite3	*db;
	int result = sqlite3_open(LibraryDB, &db);
	if (result != SQLITE_OK) {
		sqlite3_close(db);
		return;
	}

	// Insert query for compiling into sql query
	const char* InsertBookQuery = "INSERT INTO Books (Title, Pages, QTY, Author) VALUES (?, ?, ?, ?)";
	
	// Pointer to the compiled prepare statement (InsertBookQuery), can be use to bind value, executing...
	sqlite3_stmt* InsertStmt = NULL;
	// Compiled query into prepared statement or byte-code
	result = sqlite3_prepare_v2(db, InsertBookQuery, -1, &InsertStmt, NULL);
	if (result != SQLITE_OK) {
		sqlite3_close(db);
		return;
	}
	
	// Binding value into sql parameter for Insert Query
	sqlite3_bind_text(InsertStmt, 1, book.title.c_str(), -1, SQLITE_STATIC);
	sqlite3_bind_int(InsertStmt, 2, book.pages_num);
	sqlite3_bind_int(InsertStmt, 3, book.qty);
	sqlite3_bind_text(InsertStmt, 4, book.author.c_str(), -1, SQLITE_STATIC);

	// Execute the query
	result = sqlite3_step(InsertStmt);
	if (result != SQLITE_DONE) {
		sqlite3_close(db);
		return;
	}

	// Clean up memory after prepare statement is done
	sqlite3_finalize(InsertStmt);
	sqlite3_close(db);
}

// Read book data from DB, return linked list head
Node<Book> *ReadBooksDataFromDB() {
	sqlite3* db;
	int result = sqlite3_open(LibraryDB, &db);
	if (result != SQLITE_OK) {
		sqlite3_close(db);
		return 0;
	}

	// Select query
	const char* SelectBooksQuery = "SELECT * FROM Books";

	// Pointer to compiled query
	sqlite3_stmt *stmt = NULL;
	
	// Compile Query
	result = sqlite3_prepare_v2(db, SelectBooksQuery, -1, &stmt, NULL);
	if (result != SQLITE_OK) {
		sqlite3_close(db);
		return 0;
	}

	Node<Book> *head = InitializeLinkedList<Book>();

	// Execute the query, and while there are rows return, insert into linked list
	while (sqlite3_step(stmt) == SQLITE_ROW) {
		Book book;
		// Retrive data from the return row and convert it from "const unsigned char *" to 
		book.id = sqlite3_column_int(stmt, 0);
		book.title = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
		book.pages_num = sqlite3_column_int(stmt, 2);
		book.qty = sqlite3_column_int(stmt, 3);
		book.author = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 4));

		head = InsertLinkedList(head, book);
	}
	sqlite3_finalize(stmt);
	sqlite3_close(db);

	return head;
}

// Delete Book from db
void DeleteBookFromDB(int id) {
	sqlite3* db;
	int result = sqlite3_open(LibraryDB, &db);
	if (result != SQLITE_OK) {
		sqlite3_close(db);
		return;
	}
	
	// Delete query
	const char* DeleteBookQuery = "DELETE FROM Books WHERE id = ?";

	// Pointer to compiled query
	sqlite3_stmt* DeleteStmt = NULL;

	// Compile Query
	result = sqlite3_prepare_v2(db, DeleteBookQuery, -1, &DeleteStmt, NULL);
	if (result != SQLITE_OK) {
		sqlite3_close(db);
		return;
	}

	// Binding value into sql parameter for Insert Query
	sqlite3_bind_int(DeleteStmt, 1, id);

	// Execute the query
	result = sqlite3_step(DeleteStmt);
	if (result != SQLITE_DONE) {
		sqlite3_close(db);
		return;
	}

	// Clean up memory after prepare statement is done
	sqlite3_finalize(DeleteStmt);
	sqlite3_close(db);
}

// Update data in book
void UpdateBookInDB(Book book) {

	// Open Database Connection
	sqlite3* db;
	int result = sqlite3_open(LibraryDB, &db);
	if (result != SQLITE_OK) {
		sqlite3_close(db);
		return;
	}

	// Insert query for compiling into sql query
	const char* UpdateBookQuery = "UPDATE Books SET Title = ?, Pages = ?, QTY = ?, Author = ? WHERE Id = ?";

	// Pointer to the compiled prepare statement (UpdateBookQuery)
	sqlite3_stmt* UpdateStmt = NULL;

	// Compiled query into prepared statement or byte-code
	result = sqlite3_prepare_v2(db, UpdateBookQuery, -1, &UpdateStmt, NULL);
	if (result != SQLITE_OK) {
		sqlite3_close(db);
		return;
	}

	// Binding value into sql parameter for Update Query
	sqlite3_bind_text(UpdateStmt, 1, book.title.c_str(), -1, SQLITE_STATIC);
	sqlite3_bind_int(UpdateStmt, 2, book.pages_num);
	sqlite3_bind_int(UpdateStmt, 3, book.qty);
	sqlite3_bind_text(UpdateStmt, 4, book.author.c_str(), -1, SQLITE_STATIC);
	sqlite3_bind_int(UpdateStmt, 5, book.id);

	// Execute the query
	result = sqlite3_step(UpdateStmt);
	if (result != SQLITE_DONE) {
		sqlite3_close(db);
		return;
	}

	// Clean up memory after prepare statement is done
	sqlite3_finalize(UpdateStmt);
	sqlite3_close(db);
}


// Insert Student into DB
void InsertStudentDB(Student student) {
	// Open Database Connection
	sqlite3* db;
	int result = sqlite3_open(LibraryDB, &db);
	if (result != SQLITE_OK) {
		sqlite3_close(db);
		return;
	}

	// Insert query for compiling into sql query
	const char* InsertStudentQuery = "INSERT INTO Students (Name, Age, Gender, Department, Telephone) VALUES (?, ?, ?, ?, ?)";

	// Pointer to the compiled prepare statement (InsertStudentQuery), can be use to bind value, executing...
	sqlite3_stmt* InsertStmt = NULL;

	// Compiled query into prepared statement or byte-code
	result = sqlite3_prepare_v2(db, InsertStudentQuery, -1, &InsertStmt, NULL);
	if (result != SQLITE_OK) {
		sqlite3_close(db);
		return;
	}

	// Binding value into sql parameter for Insert Query
	sqlite3_bind_text(InsertStmt, 1, student.name.c_str(), -1, SQLITE_STATIC);
	sqlite3_bind_int(InsertStmt, 2, student.age);
	sqlite3_bind_text(InsertStmt, 3, student.gender.c_str(), -1, SQLITE_STATIC);
	sqlite3_bind_text(InsertStmt, 4, student.department.c_str(), -1, SQLITE_STATIC);
	sqlite3_bind_text(InsertStmt, 5, student.telephone.c_str(), -1, SQLITE_STATIC);

	// Execute the query
	result = sqlite3_step(InsertStmt);
	if (result != SQLITE_DONE) {
		sqlite3_close(db);
		return;
	}

	// Clean up memory after prepare statement is done
	sqlite3_finalize(InsertStmt);
	sqlite3_close(db);
}


// Read Student data from DB, return linked list head
Node<Student>* ReadStudentsDataFromDB() {
	sqlite3* db;
	int result = sqlite3_open(LibraryDB, &db);
	if (result != SQLITE_OK) {
		sqlite3_close(db);
		return 0;
	}

	// Select query
	const char* SelectStudentQuery = "SELECT * FROM Students";

	// Pointer to compiled query
	sqlite3_stmt* stmt = NULL;

	// Compile Query
	result = sqlite3_prepare_v2(db, SelectStudentQuery, -1, &stmt, NULL);
	if (result != SQLITE_OK) {
		sqlite3_close(db);
		return 0;
	}

	// Initialize linked list
	Node<Student>* head = InitializeLinkedList<Student>();

	// Execute the query, and while there are rows return, insert into linked list
	while (sqlite3_step(stmt) == SQLITE_ROW) {
		
		Student student;
		
		// Retrive data from the return row and convert it from "const unsigned char *" to 
		student.id = sqlite3_column_int(stmt, 0);
		student.name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
		student.age = sqlite3_column_int(stmt, 2);
		student.gender = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 3));
		student.department = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 4));
		student.telephone = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 5));

		head = InsertLinkedList(head, student);
	}

	// clean up and free memory
	sqlite3_finalize(stmt);

	sqlite3_close(db);

	return head;
}


// Delete Student from db
void DeleteStudentFromDB(int id) {
	
	sqlite3* db;
	int result = sqlite3_open(LibraryDB, &db);
	if (result != SQLITE_OK) {
		sqlite3_close(db);
		return;
	}

	// Delete query
	const char* DeleteStudentQuery = "DELETE FROM Students WHERE id = ?";

	// Pointer to compiled query
	sqlite3_stmt* DeleteStmt = NULL;

	// Compile Query
	result = sqlite3_prepare_v2(db, DeleteStudentQuery, -1, &DeleteStmt, NULL);
	if (result != SQLITE_OK) {
		sqlite3_close(db);
		return;
	}

	// Binding id value into sql parameter for Insert Query
	sqlite3_bind_int(DeleteStmt, 1, id);

	// Execute the query
	result = sqlite3_step(DeleteStmt);
	if (result != SQLITE_DONE) {
		sqlite3_close(db);
		return;
	}

	// Clean up memory after prepare statement is done
	sqlite3_finalize(DeleteStmt);
	sqlite3_close(db);
}

// Update data in student
void UpdateStudentInDB(Student student) {

	// Open Database Connection
	sqlite3* db;
	int result = sqlite3_open(LibraryDB, &db);
	if (result != SQLITE_OK) {
		sqlite3_close(db);
		return;
	}

	// Insert query for compiling into sql query
	const char* UpdateStudentQuery = "UPDATE Students SET Name = ?, Age = ?, Gender = ?, Department = ?, Telephone = ? WHERE Id = ?";

	// Pointer to the compiled prepare statement (UpdateBookQuery)
	sqlite3_stmt* UpdateStmt = NULL;

	// Compiled query into prepared statement or byte-code
	result = sqlite3_prepare_v2(db, UpdateStudentQuery, -1, &UpdateStmt, NULL);
	if (result != SQLITE_OK) {
		sqlite3_close(db);
		return;
	}

	// Binding value into sql parameter for Update Query
	sqlite3_bind_text(UpdateStmt, 1, student.name.c_str(), -1, SQLITE_STATIC);
	sqlite3_bind_int(UpdateStmt, 2, student.age);
	sqlite3_bind_text(UpdateStmt, 3, student.gender.c_str(), -1, SQLITE_STATIC);
	sqlite3_bind_text(UpdateStmt, 4, student.department.c_str(), -1, SQLITE_STATIC);
	sqlite3_bind_text(UpdateStmt, 5, student.telephone.c_str(), -1, SQLITE_STATIC);
	sqlite3_bind_int(UpdateStmt, 6, student.id);

	// Execute the query
	result = sqlite3_step(UpdateStmt);
	if (result != SQLITE_DONE) {
		sqlite3_close(db);
		return;
	}

	// Clean up memory after prepare statement is done
	sqlite3_finalize(UpdateStmt);
	sqlite3_close(db);
}

// Insert Issue book into DB
void InsertIssueDB(IssueReturn issue_book) {
	
	// Open Database Connection
	sqlite3* db;
	int result = sqlite3_open(LibraryDB, &db);
	if (result != SQLITE_OK) {
		sqlite3_close(db);
		return;
	}

	// Insert query for compiling into sql query
	const char* InsertQuery = "INSERT INTO IssueReturn (BookID, StudentID, IssueDate, ReturnDate, Status, Is_Borrowing) VALUES (?, ?, ?, ?, ?, ?)";

	// Pointer to the compiled prepare statement (InsertBookQuery), can be use to bind value, executing...
	sqlite3_stmt* InsertStmt = NULL;

	// Compiled query into prepared statement or byte-code
	result = sqlite3_prepare_v2(db, InsertQuery, -1, &InsertStmt, NULL);
	if (result != SQLITE_OK) {
		sqlite3_close(db);
		return;
	}

	// Binding value into sql parameter for Insert Query
	sqlite3_bind_int(InsertStmt, 1, issue_book.bookid);
	sqlite3_bind_int(InsertStmt, 2, issue_book.studentid);
	sqlite3_bind_text(InsertStmt, 3, issue_book.issueDate.c_str(), -1, SQLITE_STATIC);
	sqlite3_bind_text(InsertStmt, 4, issue_book.returnDate.c_str(), -1, SQLITE_STATIC);
	sqlite3_bind_text(InsertStmt, 5, issue_book.Status.c_str(), -1, SQLITE_STATIC);
	sqlite3_bind_int(InsertStmt, 6, issue_book.is_borrowing);

	// Execute the query
	result = sqlite3_step(InsertStmt);
	if (result != SQLITE_DONE) {
		sqlite3_close(db);
		return;
	}

	// Clean up memory after prepare statement is done
	sqlite3_finalize(InsertStmt);
	sqlite3_close(db);
}


// Read Issue Return data from DB, return linked list head
Node<IssueReturn>* ReadIssueReturnDataFromDB() {
	
	sqlite3* db;
	int result = sqlite3_open(LibraryDB, &db);
	if (result != SQLITE_OK) {
		sqlite3_close(db);
		return 0;
	}

	// Select query
	const char* SelectQuery = "SELECT ir.Id, ir.BookID, ir.StudentID, ir.IssueDate, ir.ReturnDate, ir.Status, ir.Is_Borrowing, b.Title, s.Name FROM IssueReturn AS ir JOIN Books AS b ON ir.BookID == b.Id JOIN Students AS s ON ir.StudentID = s.Id";

	// Pointer to compiled query
	sqlite3_stmt* stmt = NULL;

	// Compile Query
	result = sqlite3_prepare_v2(db, SelectQuery, -1, &stmt, NULL);
	if (result != SQLITE_OK) {
		sqlite3_close(db);
		return 0;
	}

	// Initialize linked list
	Node<IssueReturn>* head = InitializeLinkedList<IssueReturn>();

	// Execute the query, and while there are rows return, insert into linked list
	while (sqlite3_step(stmt) == SQLITE_ROW) {

		IssueReturn issue_return;

		// Retrive data from the return row and convert it from "const unsigned char *" to 
		issue_return.id = sqlite3_column_int(stmt, 0);
		issue_return.bookid = sqlite3_column_int(stmt, 1);
		issue_return.studentid = sqlite3_column_int(stmt, 2);

		issue_return.issueDate= reinterpret_cast<const char*>(sqlite3_column_text(stmt, 3));
		issue_return.returnDate = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 4));
		issue_return.Status = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 5));
		issue_return.is_borrowing = sqlite3_column_int(stmt, 6);
		issue_return.BookTitle = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 7));
		issue_return.StudentName = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 8));

		head = InsertLinkedList(head, issue_return);
	}

	// clean up and free memory
	sqlite3_finalize(stmt);

	sqlite3_close(db);

	return head;
}