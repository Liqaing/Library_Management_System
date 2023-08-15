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
	const char* createStudentTableQuery = "CREATE TABLE IF NOT EXISTS Students (Id INTEGER PRIMARY KEY AUTOINCREMENT, Name TEXT NOT NULL, Age INTEGER NOT NULL, Gender CHAR NOT NULL, Department TEXT NOT NULL, Telephone TEXT NOT NULL)";
	result = sqlite3_exec(db, createStudentTableQuery, 0, 0, 0);
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