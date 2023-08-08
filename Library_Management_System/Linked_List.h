#pragma once

#include <string>
#include <iostream>

typedef struct Book {
	std::string book_id;
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

/*
	Note:
	- head = header of linked list
	-
*/

// Initialize node
template <typename T>
Node<T>* InitializeLinkedList() {
	Node<T>* head = nullptr;
	return head;
}

// Get Node
template <typename T>
Node<T>* GetNode(T data) {
	Node<T>* NewNode = new Node<T>;
	NewNode->data = data;
	NewNode->next = nullptr;
	return NewNode;
}


// Create Linked List
/*
template <typename T>
Node<T>* CreateLinkedList(Node<T> *head, T data) {
	// If this is the first node
	if (head == nullptr) {
		InsertAtBeginning(head, data);
	}
}
*/


// Insert node into linked list
template <typename T>
void InsertLinkedList(Node<T> *&head, T data) {
	Node<T>* NewNode = GetNode(data);
	// New node point to current head;
	NewNode->next = head;
	// head point to new node;
	head = NewNode;
}