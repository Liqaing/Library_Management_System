#include <iostream>
#include "Source.h"
#include "sqlite3.h"


void InitializeDatabase() {
	sqlite3* db;
	int rc = sqlite3_open("library.sqlite3", &db);
	if (rc != SQLITE_OK) {
		std::cerr << "Failed to open/create database: " << sqlite3_errmsg(db) << std::endl;
		sqlite3_close(db);
		return;
	}
}

char* test() {
	char* string= "hi";
	std::cout << string;
	return string;
}

