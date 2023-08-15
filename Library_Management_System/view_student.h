#pragma once

#include "Struct.h"
#include "Linked_List.h"

// Forward Declaration
Node<Student>* ReadStudentsDataFromDB();


namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for view_student
	/// </summary>
	public ref class view_student : public System::Windows::Forms::Form
	{

	// Declare variable
	private:
		Node<Student>* StudentList = nullptr;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ StudentID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ age;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ gender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Department;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Telephone;
		   Node<Student>* current = nullptr;

	public:
		view_student(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~view_student()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:






	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ SearchType;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ Sort;
	private: System::Windows::Forms::Button^ Refresh;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Search;
	private: System::Windows::Forms::TextBox^ UserInput;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->StudentID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->gender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Department = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telephone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SearchType = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Sort = (gcnew System::Windows::Forms::ComboBox());
			this->Refresh = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Search = (gcnew System::Windows::Forms::Button());
			this->UserInput = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->StudentID,
					this->Name, this->age, this->gender, this->Department, this->Telephone
			});
			this->dataGridView1->Location = System::Drawing::Point(23, 88);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(1013, 468);
			this->dataGridView1->TabIndex = 13;
			// 
			// StudentID
			// 
			this->StudentID->HeaderText = L"Student ID";
			this->StudentID->Name = L"StudentID";
			this->StudentID->ReadOnly = true;
			this->StudentID->Width = 90;
			// 
			// Name
			// 
			this->Name->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Name->HeaderText = L"Student Name";
			this->Name->Name = L"Name";
			this->Name->ReadOnly = true;
			// 
			// age
			// 
			this->age->HeaderText = L"Age";
			this->age->Name = L"age";
			this->age->ReadOnly = true;
			this->age->Width = 80;
			// 
			// gender
			// 
			this->gender->HeaderText = L"Gender";
			this->gender->Name = L"gender";
			this->gender->ReadOnly = true;
			this->gender->Width = 80;
			// 
			// Department
			// 
			this->Department->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Department->HeaderText = L"Department";
			this->Department->Name = L"Department";
			this->Department->ReadOnly = true;
			// 
			// Telephone
			// 
			this->Telephone->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Telephone->HeaderText = L"Telephone";
			this->Telephone->Name = L"Telephone";
			this->Telephone->ReadOnly = true;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(237, 54);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(19, 18);
			this->label4->TabIndex = 22;
			this->label4->Text = L"In";
			// 
			// SearchType
			// 
			this->SearchType->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->SearchType->DisplayMember = L"(none)";
			this->SearchType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->SearchType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchType->FormattingEnabled = true;
			this->SearchType->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Student ID", L"Student Name", L"Age", L"Gender",
					L"Department", L"Telephone"
			});
			this->SearchType->Location = System::Drawing::Point(258, 52);
			this->SearchType->Name = L"SearchType";
			this->SearchType->Size = System::Drawing::Size(116, 24);
			this->SearchType->TabIndex = 21;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(873, 53);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 18);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Sort";
			// 
			// Sort
			// 
			this->Sort->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Sort->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Sort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sort->FormattingEnabled = true;
			this->Sort->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"By ID", L"By Name", L"By Age", L"By Gender", L"By Department",
					L"By Telephone"
			});
			this->Sort->Location = System::Drawing::Point(915, 52);
			this->Sort->Name = L"Sort";
			this->Sort->Size = System::Drawing::Size(121, 24);
			this->Sort->TabIndex = 19;
			this->Sort->SelectedIndexChanged += gcnew System::EventHandler(this, &view_student::Sort_SelectedIndexChanged);
			// 
			// Refresh
			// 
			this->Refresh->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Refresh->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->Refresh->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Refresh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Refresh->ForeColor = System::Drawing::Color::White;
			this->Refresh->Location = System::Drawing::Point(458, 52);
			this->Refresh->Name = L"Refresh";
			this->Refresh->Size = System::Drawing::Size(71, 24);
			this->Refresh->TabIndex = 18;
			this->Refresh->Text = L"Refresh";
			this->Refresh->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(20, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 18);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Search";
			// 
			// Search
			// 
			this->Search->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Search->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->Search->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Search->ForeColor = System::Drawing::Color::White;
			this->Search->Location = System::Drawing::Point(380, 52);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(72, 24);
			this->Search->TabIndex = 16;
			this->Search->Text = L"Search";
			this->Search->UseVisualStyleBackColor = false;
			this->Search->Click += gcnew System::EventHandler(this, &view_student::Search_Click);
			// 
			// UserInput
			// 
			this->UserInput->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->UserInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserInput->Location = System::Drawing::Point(81, 52);
			this->UserInput->Name = L"UserInput";
			this->UserInput->Size = System::Drawing::Size(150, 24);
			this->UserInput->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(446, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(239, 29);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Student Information";
			// 
			// view_student
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1064, 681);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->SearchType);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Sort);
			this->Controls->Add(this->Refresh);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Search);
			this->Controls->Add(this->UserInput);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(1);
			this->Text = L"view_student";
			this->Load += gcnew System::EventHandler(this, &view_student::view_student_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		// When form load
		private: System::Void view_student_Load(System::Object^ sender, System::EventArgs^ e) {
			
			// Read data from db into linked list
			this->StudentList = ReadStudentsDataFromDB();

			// Travese, Display data from linked list into datagridview
			TraverseLinkedList(this->dataGridView1, this->StudentList, DisplayStudentIntoDatagridWithID);

			// Set defualt value to combobox for search to "name"
			SearchType->SelectedIndex = 1;
		}
	
		// sort student linked list
		private: System::Void Sort_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

			// Retrive select item from combo box
			std::string SelectedItem = msclr::interop::marshal_as<std::string>(Sort->SelectedItem->ToString());

			// Check for item to sort by
			if (SelectedItem == "By ID") {
				
				// Sort
				this->StudentList = SortLinkedList(StudentList, CompareStudentID);

				// Display again
				dataGridView1->Rows->Clear();
				TraverseLinkedList(dataGridView1, StudentList, DisplayStudentIntoDatagridWithID);
			}
			else if (SelectedItem == "By Name") {
				this->StudentList = SortLinkedList(StudentList, CompareStudentName);
				dataGridView1->Rows->Clear();
				TraverseLinkedList(dataGridView1, StudentList, DisplayStudentIntoDatagridWithID);
			}
			else if (SelectedItem == "By Age") {
				this->StudentList = SortLinkedList(StudentList, CompareStudentAge);
				dataGridView1->Rows->Clear();
				TraverseLinkedList(dataGridView1, StudentList, DisplayStudentIntoDatagridWithID);
			}
			else if (SelectedItem == "By Gender") {
				this->StudentList = SortLinkedList(StudentList, CompareStudentGender);
				dataGridView1->Rows->Clear();
				TraverseLinkedList(dataGridView1, StudentList, DisplayStudentIntoDatagridWithID);
			}
			else if (SelectedItem == "By Department") {
				this->StudentList = SortLinkedList(StudentList, CompareStudentDepartment);
				dataGridView1->Rows->Clear();
				TraverseLinkedList(dataGridView1, StudentList, DisplayStudentIntoDatagridWithID);
			}
			else if (SelectedItem == "By Telephone") {
				this->StudentList = SortLinkedList(StudentList, CompareStudentTelephone);
				dataGridView1->Rows->Clear();
				TraverseLinkedList(dataGridView1, StudentList, DisplayStudentIntoDatagridWithID);
			}
		}

		// Search Linked List
		private: System::Void Search_Click(System::Object^ sender, System::EventArgs^ e) {

			// Retrive the input
			std::string SearchData = msclr::interop::marshal_as<std::string>(UserInput->Text);

			// Retrive select item from combo box
			std::string SelectedItem = msclr::interop::marshal_as<std::string>(SearchType->SelectedItem->ToString());

			// Check for data type to search for
			if (SelectedItem == "Student ID") {

				// Cleare data gird view
				dataGridView1->Rows->Clear();

				// Search
				//SearchBookLinkedList(dataGridView1, BookList, SearchData, CompareSearchID);
			}
		}
	};
}
