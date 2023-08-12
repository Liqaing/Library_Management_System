#pragma once

#include <string>
#include "Struct.h"
#include "Database.h"

// Forward Declaration
//void InsertBookDB(Book book);

/*
	Note:
	- head = header of linked list
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


template <typename T>
void FreeNode(Node<T> *Node) {
	delete Node;
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
Node<T> *InsertLinkedList(Node<T> *head, T data) {
	Node<T>* NewNode = GetNode(data);
	// New node point to current head;
	NewNode->next = head;
	// head point to new node;
	head = NewNode;
	return head;
}


// Insert linked list of books into database
template <typename T>
void InsertBookLinkedListIntoDB(Node<T> *head) {
	// Current pointer point to head of linked list
	Node<T> *current = head;
	while (current != nullptr) {
		InsertBookDB(current->data);
		current = current->next;
	}
}

// Clear all node in linked list
template <typename T>
void ClearLinkedList(Node<T> *head) {
	Node<T>* current = head;
	// Create pointer node point to current, then move current to next and free node
	while (current != nullptr) {
		Node<T>* Node = current;
		current = current->next;
		free(Node);
	}
}

// Search linked list
/*
template <typename T, typename Predicate>
Node<T>* SearchLinkedList(Node<T>* head, Predicate predicate) {
	Node<T>* current = head;
	while (current != nullptr) {
		if (predicate(current->data, presi)) {
			return current; // Found a match
		}
		current = current->next;
	}
	return nullptr; // Not found
}
*/