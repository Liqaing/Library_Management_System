#pragma once
#include "Struct.h"

void InitializeDatabase();
void InsertBookDB(Book book);
Node<Book>* ReadBooksDataFromDB();
void DeleteBookFromDB(int id);