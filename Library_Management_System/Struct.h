#pragma once
#include <iostream>

typedef struct Book {
	int book_id;
	std::string title;
	int pages_num;
	int qty;
	std::string author;
} Book;

typedef struct Student {
	std::string first_name;
	std::string last_name;
	std::string student_id;
	std::string telephone;
} Student;


template <typename T>
struct Node {
	T data;
	struct Node<T>* next;
};