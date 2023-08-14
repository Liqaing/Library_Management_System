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
			current->data.id,
			msclr::interop::marshal_as<System::String^>(current->data.title),
			current->data.pages_num,
			current->data.qty,
			msclr::interop::marshal_as<System::String^>(current->data.author)
		);
		current = current->next;
	}
	return;
}

// Display book in add_book.h
template <typename T>
void TraverseBookLinkedListInAddBook(System::Windows::Forms::DataGridView^ dataGridview, Node<T>* head) {
	Node<T>* current = head;
	while (current != nullptr) {
		// Set text for each columns in row
		dataGridview->Rows->Add(
			msclr::interop::marshal_as<System::String^>(current->data.title),
			current->data.pages_num,
			current->data.qty,
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

// Search

template <typename T>
bool CompareSearchTitle(T book, std::string SearchTitle) {
	return (book.title == SearchTitle);
}

template <typename T>
bool CompareSearchAuthor(T book, std::string SearchAuthor) {
	return (book.author == SearchAuthor);
}

template <typename T>
bool CompareSearchID(T book, std::string SearchID) {
	// in case search id is charater not integer return false
	try {
		int id = std::stoi(SearchID);
		return (book.id == id);
	}
	catch (...) {
		return false;
	}
}

template <typename T>
bool CompareSearchPages(T book, std::string SearchPages) {
	try {
		int pages = std::stoi(SearchPages);
		return (book.pages_num == pages);
	}
	catch (...) {
		return false;
	}
}

template <typename T>
bool CompareSearchQty(T book, std::string SearchQty) {
	try {
		int qty = std::stoi(SearchQty);
		return (book.qty == qty);
	}
	catch (...) {
		return false;
	}
}

// Search linked list and display value to datagridview
template <typename T>
void SearchBookLinkedList(System::Windows::Forms::DataGridView^ dataGridView, Node<T> *head, std::string SearchData, bool (*comp)(T, std::string)) {
	
	Node<T> *current = head;

	while (current != nullptr) {

		// Call function to compare data
		if (comp(current->data, SearchData)) {
		
			// add row to data grid view
			dataGridView->Rows->Add(
				current->data.id,
				msclr::interop::marshal_as<System::String^>(current->data.title),
				current->data.pages_num, current->data.qty,
				msclr::interop::marshal_as<System::String^>(current->data.author)
			);
		}
		current = current->next;
	}
	return;
}

// Search linked list and return value
template <typename T>
Node<T>* SearchNodeLinkedList(Node<T>* head, int SearchID) {
	
	Node<T>* current = head;

	while (current != nullptr) {

		// Call funtion to compare data
		if (current->data.id == SearchID) {
		
			// Return founded node
			return current;
		}
		current = current->next;
	}
	return nullptr;
}


// Sort Books linked list

template <typename T>
bool CompareBookID(T book1, T book2) {
	return (book1.id > book2.id);
}

template <typename T>
bool CompareBookTitle(T book1, T book2) {
	return (book1.title > book2.title);
}

template <typename T>
bool CompareBookPages(T book1, T book2) {
	return (book1.pages_num > book2.pages_num);
}

template <typename T>
bool CompareBookQty(T book1, T book2) {
	return (book1.qty > book2.qty);
}

template <typename T>
bool CompareBookAuthor(T book1, T book2) {
	return (book1.author > book2.author);
}

// Sort
template <typename T>
Node<T>* SortLinkedList(Node<T>* head, bool (*comp)(T, T)) {
	
	Node<T>* current = nullptr;
	Node<T>* next_node = nullptr;
	Node<T> temp;

	for (current = head; current != nullptr; current = current->next) {
		for (next_node = current->next; next_node != nullptr; next_node = next_node->next) {
			
			// Pass data into function for comparison
			if (comp(current->data, next_node->data)) {

				// Swap data between current and next nodes
				temp.data = current->data;
				current->data = next_node->data;
				next_node->data = temp.data;
			}
		}
	}
	return head;
}


// Delete node from linked list
template <typename T>
Node<T> *DeleteNodeFromLinkedList(Node<T>* head, int DeleteID) {

	Node<T>* current = head;

	// Get pointer to element for deletiom
	Node<T> *Node = SearchNodeLinkedList(head, DeleteID);

	if (Node == nullptr) {
		return head;
	}

	// Delete at beginning
	if (Node == head) {

		// move head
		head = head->next;
		// free temp
		FreeNode(Node);
		
		return head;
	}

	// Delete at the end
	else if (Node->next == nullptr) {

		// loop to before the delete node
		while (current->next != Node) {
			current = current->next;
		}

		current->next = nullptr;
		FreeNode(Node);
		return head;
	}
	
	// Delete somewhere in linked list
	else {
		// loop to before the delete node
		while (current->next != Node) {
			current = current->next;
		}

		// current point to where node point to
		current->next = Node->next;
		FreeNode(Node);
		return head;
	}
}

// Update linked list book
template <typename T>
Node<T>* UpdateLinkedList(Node<T> *head, T UpdateData) {

	Node<T>* current = head;

	// Get pointer to element for update
	Node<T>* Node = SearchNodeLinkedList(head, UpdateData.id);

	// Loop to the update node location
	while (current != Node) {
		current = current->next;
	}
	// When arrive at location of update node
	if (current == Node) {

		// Update the data
		Node->data = UpdateData;
	}
	return head;
}