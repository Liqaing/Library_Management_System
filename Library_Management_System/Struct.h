#pragma once
#include <iostream>

typedef struct Book {
	int id;
	std::string title;
	int pages_num;
	int qty;
	std::string author;
} Book;

typedef struct Student {
	int id;
	std::string name;
	int age;
	std::string gender;
	std::string department;
	std::string telephone;
} Student;


typedef struct IssueReturn {
	int id;
	int bookid;
	int studentid;

	// To store name and title when read data from DB
	std::string StudentName;
	std::string BookTitle;

	std::string issueDate;
	std::string returnDate;
	std::string Status;
	int is_borrowing;
} IssueReturn;

template <typename T>
struct Node {
	T data;
	struct Node<T>* next;
};