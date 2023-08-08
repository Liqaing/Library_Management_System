#include "Database.h"
#include <iostream>
#include "sqlite3.h"
#include <string>

void InitializeDatabase() {
	sqlite3* db;
	int result = sqlite3_open("library.sqlite3", &db);
	if (result != SQLITE_OK) {
		sqlite3_close(db);
		return;
	}

	// Create book table
	const char *createBookTable = "CREATE TABLE IF NOT EXISTS Book (Id INTEGER PRIMARY KEY, Book_ID TEXT NOT NULL UNIQUE, Title TEXT NOT NULL, Pages INTEGER, QTY INTEGEER NOT NULL, Author TEXT)";
	result = sqlite3_exec(db, createBookTable, 0, 0, 0);
	if (result != SQLITE_OK) {
		return;
	}
}