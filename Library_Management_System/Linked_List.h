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

// Insert linked list of students into database
template <typename T>
void InsertStudentLinkedListIntoDB(Node<T>* head) {

	// Current pointer point to head of linked list
	Node<T>* current = head;
	while (current != nullptr) {
		InsertStudentDB(current->data);
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

// Display book in add book, without id
template <typename T>
void DisplayBookIntoDatagridWithoutID(System::Windows::Forms::DataGridView^ dataGridview, T Data) {

	// add book data into DataGridView
	dataGridview->Rows->Add(

		// Set text for each columns in row
		msclr::interop::marshal_as<System::String^>(Data.title),
		Data.pages_num,
		Data.qty,
		msclr::interop::marshal_as<System::String^>(Data.author)
	);
}

// Display book in view book, with id
template <typename T>
void DisplayBookIntoDatagridWithID(System::Windows::Forms::DataGridView^ dataGridview, T Data) {

	// add book data into DataGridView
	dataGridview->Rows->Add(

		// Set text for each columns in row
		Data.id,
		msclr::interop::marshal_as<System::String^>(Data.title),
		Data.pages_num,
		Data.qty,
		msclr::interop::marshal_as<System::String^>(Data.author)
	);
}

// Display Student in add student, without id
template <typename T>
void DisplayStudentIntoDatagridWithoutID(System::Windows::Forms::DataGridView^ dataGridview, T Data) {

	// add student data into DataGridView
	dataGridview->Rows->Add(

		// Set text for each columns in row
		msclr::interop::marshal_as<System::String^>(Data.name),
		Data.age,
		msclr::interop::marshal_as<System::String^>(Data.gender), // Datagrid will display char as number if i dont use sting
		msclr::interop::marshal_as<System::String^>(Data.department),
		msclr::interop::marshal_as<System::String^>(Data.telephone)
	);
}

// Display Student in view student, with id
template <typename T>
void DisplayStudentIntoDatagridWithID(System::Windows::Forms::DataGridView^ dataGridview, T Data) {

	// add student data into DataGridView
	dataGridview->Rows->Add(

		// Set text for each columns in row
		Data.id,
		msclr::interop::marshal_as<System::String^>(Data.name),
		Data.age,
		msclr::interop::marshal_as<System::String^>(Data.gender), // Datagrid will display char as number if i dont use sting
		msclr::interop::marshal_as<System::String^>(Data.department),
		msclr::interop::marshal_as<System::String^>(Data.telephone)
	);
}

// Display IssueReturn data into datagrid with id
template <typename T>
void DisplayIssueReturnIntoDatagrid(System::Windows::Forms::DataGridView^ dataGridview, T Data) {

	// add student data into DataGridView
	dataGridview->Rows->Add(

		// Set text for each columns in row
		Data.id,
		msclr::interop::marshal_as<System::String^>(Data.StudentName),
		msclr::interop::marshal_as<System::String^>(Data.BookTitle),
		msclr::interop::marshal_as<System::String^>(Data.issueDate),
		msclr::interop::marshal_as<System::String^>(Data.returnDate),
		msclr::interop::marshal_as<System::String^>(Data.Status)
	);
}

// Display data in book or student linked list into datagridview
template <typename T>
void TraverseLinkedList(System::Windows::Forms::DataGridView^ dataGridview, Node<T>* head, void (*DisplayDataIntoDatagrid) (System::Windows::Forms::DataGridView^ dataGridview, T Data)) {
	Node<T>* current = head;

	while (current != nullptr) {
		
		// Call function to fill data into datagridview
		DisplayDataIntoDatagrid(dataGridview, current->data);
		
		current = current->next;
	}
	return;
}

// Search

// Search Book
template <typename T>
void SearchBookTitle(System::Windows::Forms::DataGridView^ dataGridview, T book, std::string SearchTitle) {
	
	// compare book title
	if (book.title == SearchTitle) {
		// Display data
		DisplayBookIntoDatagridWithID(dataGridview, book);
	}	
}

template <typename T>
void SearchBookAuthor(System::Windows::Forms::DataGridView^ dataGridview, T book, std::string SearchAuthor) {
	
	// compare book author
	if (book.author == SearchAuthor) {
		DisplayBookIntoDatagridWithID(dataGridview, book);
	}
}

template <typename T>
void SearchBookID(System::Windows::Forms::DataGridView^ dataGridview, T book, std::string SearchID) {
	
	// compare book id
	if (std::to_string(book.id) == SearchID) {
		DisplayBookIntoDatagridWithID(dataGridview, book);
	}
}

template <typename T>
void SearchBookPages(System::Windows::Forms::DataGridView^ dataGridview, T book, std::string SearchPages) {
	
	// compare book pages
	if (std::to_string(book.pages_num) == SearchPages) {
		DisplayBookIntoDatagridWithID(dataGridview, book);
	}
}

template <typename T>
void SearchBookQty(System::Windows::Forms::DataGridView^ dataGridview, T book, std::string SearchQty) {
	
	// compare book qty
	if (std::to_string(book.qty) == SearchQty) {
		DisplayBookIntoDatagridWithID(dataGridview, book);
	}
}

// Search Student
template <typename T>
void SearchStudentID(System::Windows::Forms::DataGridView^ dataGridview, T student, std::string SearchID) {

	// compare student id
	if (std::to_string(student.id) == SearchID) {
		DisplayStudentIntoDatagridWithID(dataGridview, student);
	}
}

template <typename T>
void SearchStudentName(System::Windows::Forms::DataGridView^ dataGridview, T student, std::string SearchName) {

	// compare student name
	if (student.name == SearchName) {
		DisplayStudentIntoDatagridWithID(dataGridview, student);
	}
}

template <typename T>
void SearchStudentAge(System::Windows::Forms::DataGridView^ dataGridview, T student, std::string SearchAge) {

	// compare student age
	if (std::to_string(student.age) == SearchAge) {
		DisplayStudentIntoDatagridWithID(dataGridview, student);
	}
}

template <typename T>
void SearchStudentGender(System::Windows::Forms::DataGridView^ dataGridview, T student, std::string SearchGender) {

	// compare student gender
	if (student.gender == SearchGender) {
		DisplayStudentIntoDatagridWithID(dataGridview, student);
	}
}

template <typename T>
void SearchStudentDepartment(System::Windows::Forms::DataGridView^ dataGridview, T student, std::string SearchDepartment) {

	// compare student department
	if (student.department == SearchDepartment) {
		DisplayStudentIntoDatagridWithID(dataGridview, student);
	}
}

template <typename T>
void SearchStudentTelephone(System::Windows::Forms::DataGridView^ dataGridview, T student, std::string SearchTelephone) {

	// compare student department
	if (student.telephone == SearchTelephone) {
		DisplayStudentIntoDatagridWithID(dataGridview, student);
	}
}

// Search linked list and display value to datagridview
template <typename T>
void SearchNodeLinkedList(System::Windows::Forms::DataGridView^ dataGridView, Node<T> *head, std::string SearchData, void (*Search) (System::Windows::Forms::DataGridView^ dataGridview, T book, std::string SearchTitle)) {
	
	Node<T> *current = head;

	while (current != nullptr) {

		// Search (compare data and display if data is match)
		Search(dataGridView, current->data, SearchData);
		current = current->next;
	}
	return;
}

// Search linked list and return value
template <typename T>
Node<T>* SearchNodeLinkedList(Node<T>* head, int SearchID) {
	
	Node<T>* current = head;

	while (current != nullptr) {

		// compare id data
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

// Sort Student Linked list

template <typename T>
bool CompareStudentID(T student1, T student2) {
	return (student1.id > student2.id);
}

template <typename T>
bool CompareStudentName(T student1, T student2) {
	return (student1.name > student2.name);
}

template <typename T>
bool CompareStudentAge(T student1, T student2) {
	return (student1.age > student2.age);
}

template <typename T>
bool CompareStudentGender(T student1, T student2) {
	return (student1.gender > student2.gender);
}

template <typename T>
bool CompareStudentDepartment(T student1, T student2) {
	return (student1.department > student2.department);
}

template <typename T>
bool CompareStudentTelephone(T student1, T student2) {
	return (student1.telephone > student2.telephone);
}

// Sort Algorithm
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

	// Get pointer to element for deletion
	Node<T> *Node = SearchNodeLinkedList(head, DeleteID);
	
	// if node is not found
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