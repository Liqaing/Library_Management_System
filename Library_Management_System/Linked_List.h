#pragma once

#include <iostream>

typedef struct Book {
	char book_id[10];
	char title[64];
	int pages_num;
	int qty;
	char author[64];
} Book;

typedef struct Student {
	char first_name[15];
	char last_name[15];
	char student_id[10];
	char telephone[10];
} Student;

template <typename T>
struct Node {
	T data;
	struct Node* next;
};


Book* book = nullptr;
Student* student = nullptr;


/*
	Note:
	- plist = header of linked list
	-
*/

// Initialize node
template <typename T>
T* InitializeLinkedList(T* head) {
	head = NULL;
	return head;
}

// Get Node
template <typename T>
T* GetNode(T data) {
	Node<T>* NewNode = new Node<T>;
	NewNode->data = data;
	NewNode->next = NULL;
	return newnode;
}


template <typename T>
void InsertAtBeginning(Node <T>*& head, T data) {
	Node<T>* NewNode = GetNode(data);
	NewNode->next = head;
	head = NewNode;
}