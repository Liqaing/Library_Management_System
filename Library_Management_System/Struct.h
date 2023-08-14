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


template <typename T>
struct Node {
	T data;
	struct Node<T>* next;
};