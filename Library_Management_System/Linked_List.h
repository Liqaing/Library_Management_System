#pragma once

#include <string>
#include "Struct.h"
#include "Database.h"
#include <msclr/marshal_cppstd.h>

// Forward Declaration
//void InsertBookDB(Book book);

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


// Display book in view_book.h
template <typename T>
void TraverseBookLinkedList(System::Windows::Forms::DataGridView^ dataGridview, Node<T>* head) {
	Node<T> *current = head;
	while (current != nullptr) {
		// Set text for each columns in row
		dataGridview->Rows->Add(
			current->data.book_id,
			msclr::interop::marshal_as<System::String^>(current->data.title),
			current->data.pages_num, current->data.qty,
			msclr::interop::marshal_as<System::String^>(current->data.author)
		);
		current = current->next;
	}
	return;
}	


// Search Book linked list
/* Take one input but search for in both title and author column
template <typename T>
Node<T> *SearchLinkedList(Node<T> *head, std::string SearchData) {
	
	Node<T> *current = head;

	// Split linked list
	Node<T> *NewHead = nullptr;
	
	while (current != nullptr) {
		if (current->data.title == SearchData) {
			NewHead = InsertLinkedList(NewHead, current->data);
			//return current; // Found a match
		}
		else if (current->data.author == SearchData) {
			NewHead = InsertLinkedList(NewHead, current->data);
		}
		current = current->next;
		
	}
	return NewHead; // Not found
}
*/

// Search for book title in linked list and display it to data grid view
template <typename T>
void SearchBookTitle(System::Windows::Forms::DataGridView^ dataGridView, Node<T> *head, std::string SearchTitle) {
	
	Node<T> *current = head;

	while (current != nullptr) {
		// if found
		if (current->data.title == SearchTitle) {
			// add row to data grid view
			dataGridView->Rows->Add(
				current->data.book_id,
				msclr::interop::marshal_as<System::String^>(current->data.title),
				current->data.pages_num, current->data.qty,
				msclr::interop::marshal_as<System::String^>(current->data.author)
			);
		}
		current = current->next;
	}
	return;
}

// Search for book author
template <typename T>
void SearchBookAuthor(System::Windows::Forms::DataGridView^ dataGridView, Node<T>* head, std::string SearchTitle) {

	Node<T>* current = head;

	while (current != nullptr) {
		// if found
		if (current->data.author == SearchTitle) {
			// add row to data grid view
			dataGridView->Rows->Add(
				current->data.book_id,
				msclr::interop::marshal_as<System::String^>(current->data.title),
				current->data.pages_num,
				current->data.qty,
				msclr::interop::marshal_as<System::String^>(current->data.author)
			);
		}
		current = current->next;
	}
	return;
}

// Sort Books linked list
/*
template <typename T>
bool CompareBookID(T book1, T book2) {
	return (book1.book_id > book2.book_id);
} */

// Bubble sort

template <typename T>
Node<T> *SortBookLinkedList(Node<T>* head) {
	
	Node<T>* current = nullptr;
	Node<T>* next_node = nullptr;
	Node<T> temp;

	for (current = head; current != nullptr; current = current->next) {
		for (next_node = current->next; next_node != nullptr; next_node = next_node->next) {
			
			// Pass data into function for comparison
			if (current->data.book_id > next_node->data.book_id) {

				// Swap data between current and next nodes
				temp.data = current->data;
				current->data = next_node->data;
				next_node->data = temp.data;
			}
		}
	}
	return head;
}

/*
template <typename T>
void SortBookLinkedList(Node<T>* head, bool (*func)(T, T)) {
	if (head == nullptr || head->next == nullptr) {
		return; // Nothing to sort
	}

	bool swapped;
	Node<T>* current;
	Node<T>* last = nullptr;

	do {
		swapped = false;
		current = head;

		while (current->next != last) {
			if (func(current->data, current->next->data)) {
				// Swap data between current and next nodes
				T temp = current->data;
				current->data = current->next->data;
				current->next->data = temp;
				swapped = true;
			}
			current = current->next;
		}
		last = current;
	} while (swapped);
} */