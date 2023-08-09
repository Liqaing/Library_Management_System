#include "Database.h"
#include "Struct.h"
#include "sqlite3.h"

// Forward Declaration


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
	const char *createBookTableQuery = "CREATE TABLE IF NOT EXISTS Books (Id INTEGER PRIMARY KEY AUTOINCREMENT, Book_ID TEXT NOT NULL UNIQUE, Title TEXT NOT NULL, Pages INTEGER, QTY INTEGEER NOT NULL, Author TEXT)";
	result = sqlite3_exec(db, createBookTableQuery, 0, 0, 0);
	if (result != SQLITE_OK) {
		return;
	}

	sqlite3_close(db);
}

void InsertBookDB(Book book) {
	// Open Database Connection
	sqlite3	*db;
	int result = sqlite3_open(LibraryDB, &db);
	if (result != SQLITE_OK) {
		sqlite3_close(db);
		return;
	}

	// Insert query for compiling into sql query
	const char* InsertBookQuery = "INSERT INTO Books (Book_ID, Title, Pages, QTY, Author) VALUES (?, ?, ?, ?, ?)";
	
	// Pointer to the compiled prepare statement (InsertBookQuery), can be use to bind value, executing...
	sqlite3_stmt* InsertStmt = NULL;
	// Compiled query into prepared statement or byte-code
	result = sqlite3_prepare_v2(db, InsertBookQuery, -1, &InsertStmt, NULL);
	if (result != SQLITE_OK) {
		sqlite3_close(db);
		return;
	}
	
	// Binding value into sql parameter for Insert Query
	sqlite3_bind_text(InsertStmt, 1, book.book_id.c_str(), -1, SQLITE_STATIC);
	sqlite3_bind_text(InsertStmt, 2, book.title.c_str(), -1, SQLITE_STATIC);
	sqlite3_bind_int(InsertStmt, 3, book.pages_num);
	sqlite3_bind_int(InsertStmt, 4, book.qty);
	sqlite3_bind_text(InsertStmt, 5, book.author.c_str(), -1, SQLITE_STATIC);

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