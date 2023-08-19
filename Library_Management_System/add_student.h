#pragma once

#include <msclr/marshal_cppstd.h>
#include "Struct.h"
#include "Linked_List.h"


namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for add_student
	/// </summary>
	public ref class add_student : public System::Windows::Forms::Form
	{

	// Declare variable
	private:
		Node<Student> *StudentList = nullptr;

	public:
		add_student(void)
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
		~add_student()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:





	private: System::Windows::Forms::NumericUpDown^ age;

	private: System::Windows::Forms::Button^ save;
	private: System::Windows::Forms::Button^ add;
	private: System::Windows::Forms::TextBox^ Department;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ StudentName;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ Male;
	private: System::Windows::Forms::RadioButton^ Female;
	private: System::Windows::Forms::TextBox^ Telephone;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Title;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::Label^ label7;











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
			this->Title = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->age = (gcnew System::Windows::Forms::NumericUpDown());
			this->save = (gcnew System::Windows::Forms::Button());
			this->add = (gcnew System::Windows::Forms::Button());
			this->Department = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->StudentName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Male = (gcnew System::Windows::Forms::RadioButton());
			this->Female = (gcnew System::Windows::Forms::RadioButton());
			this->Telephone = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->age))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Title,
					this->dataGridViewTextBoxColumn1, this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->Column1
			});
			this->dataGridView1->Location = System::Drawing::Point(25, 360);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(1013, 255);
			this->dataGridView1->TabIndex = 31;
			// 
			// Title
			// 
			this->Title->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Title->HeaderText = L"Student Name";
			this->Title->Name = L"Title";
			this->Title->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->dataGridViewTextBoxColumn1->HeaderText = L"Age";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 80;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Sex";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 80;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn3->HeaderText = L"Department";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column1->HeaderText = L"Telephone";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// age
			// 
			this->age->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->age->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->age->Location = System::Drawing::Point(426, 100);
			this->age->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->age->Name = L"age";
			this->age->Size = System::Drawing::Size(334, 23);
			this->age->TabIndex = 29;
			this->age->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 16, 0, 0, 0 });
			// 
			// save
			// 
			this->save->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->save->BackColor = System::Drawing::Color::SkyBlue;
			this->save->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save->ForeColor = System::Drawing::Color::Black;
			this->save->Location = System::Drawing::Point(621, 282);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(139, 37);
			this->save->TabIndex = 28;
			this->save->Text = L"Save";
			this->save->UseVisualStyleBackColor = false;
			this->save->Click += gcnew System::EventHandler(this, &add_student::save_Click);
			// 
			// add
			// 
			this->add->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->add->BackColor = System::Drawing::Color::SkyBlue;
			this->add->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add->ForeColor = System::Drawing::Color::Black;
			this->add->Location = System::Drawing::Point(426, 282);
			this->add->Name = L"add";
			this->add->Size = System::Drawing::Size(139, 37);
			this->add->TabIndex = 27;
			this->add->Text = L"Add to linked list";
			this->add->UseVisualStyleBackColor = false;
			this->add->Click += gcnew System::EventHandler(this, &add_student::add1_Click);
			// 
			// Department
			// 
			this->Department->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Department->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Department->Location = System::Drawing::Point(426, 182);
			this->Department->Name = L"Department";
			this->Department->Size = System::Drawing::Size(334, 23);
			this->Department->TabIndex = 26;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(291, 187);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 18);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Department";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(291, 144);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 18);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Gender";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(291, 100);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 18);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Age";
			// 
			// StudentName
			// 
			this->StudentName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->StudentName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentName->Location = System::Drawing::Point(426, 55);
			this->StudentName->Name = L"StudentName";
			this->StudentName->Size = System::Drawing::Size(334, 23);
			this->StudentName->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(291, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 18);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Student Name";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(421, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(268, 29);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Register New Student";
			// 
			// Male
			// 
			this->Male->AutoSize = true;
			this->Male->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Male->Location = System::Drawing::Point(426, 144);
			this->Male->Name = L"Male";
			this->Male->Size = System::Drawing::Size(55, 20);
			this->Male->TabIndex = 32;
			this->Male->TabStop = true;
			this->Male->Text = L"Male";
			this->Male->UseVisualStyleBackColor = true;
			// 
			// Female
			// 
			this->Female->AutoSize = true;
			this->Female->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Female->Location = System::Drawing::Point(512, 144);
			this->Female->Name = L"Female";
			this->Female->Size = System::Drawing::Size(71, 20);
			this->Female->TabIndex = 33;
			this->Female->TabStop = true;
			this->Female->Text = L"Female";
			this->Female->UseVisualStyleBackColor = true;
			// 
			// Telephone
			// 
			this->Telephone->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Telephone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Telephone->Location = System::Drawing::Point(426, 230);
			this->Telephone->Name = L"Telephone";
			this->Telephone->Size = System::Drawing::Size(334, 23);
			this->Telephone->TabIndex = 35;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(291, 235);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 18);
			this->label2->TabIndex = 34;
			this->label2->Text = L"Telephone";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(22, 339);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(134, 18);
			this->label7->TabIndex = 36;
			this->label7->Text = L"Linked List Preview";
			// 
			// add_student
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1064, 681);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Telephone);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Female);
			this->Controls->Add(this->Male);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->age);
			this->Controls->Add(this->save);
			this->Controls->Add(this->add);
			this->Controls->Add(this->Department);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->StudentName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"add_student";
			this->Text = L"add_student";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->age))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// Save student into data
		private: System::Void save_Click(System::Object^ sender, System::EventArgs^ e) {

			// If student list is not null
			if (this->StudentList != nullptr) {

				// Insert booklist to database
				InsertStudentLinkedListIntoDB(this->StudentList);

				dataGridView1->Rows->Clear();

				// Free all node in booklist after using it
				ClearLinkedList(this->StudentList);
				this->StudentList = nullptr;
			}
			else {
				MessageBox::Show("Linked List is empty, Nothing to save");
				return;
			}
		}

		// Add student into Linked List
		private: System::Void add1_Click(System::Object^ sender, System::EventArgs^ e) {
			
			// Validate textbox input
			if (String::IsNullOrEmpty(this->StudentName->Text) || String::IsNullOrEmpty(this->Department->Text) || String::IsNullOrEmpty(this->Telephone->Text)) {
				MessageBox::Show("Please fill the input");
				return;
			}

			/*
			if (this->pages->Value <= 0 || this->qty->Value <= 0) {
				MessageBox::Show("Invalid pages number and quatity");
				return;
			}
			*/

			// Retrive input
			Student student;
			student.name = msclr::interop::marshal_as<std::string>(this->StudentName->Text);
			student.age = (int)(this->age->Value);
			
			// Check whick radio box is click
			if (this->Male->Checked) {
				student.gender = 'M';
			}
			else if (this->Female->Checked) {
				student.gender = 'F';
			}
			else {
				MessageBox::Show("Please select gender");
				return;
			}
			
			student.department = msclr::interop::marshal_as<std::string>(this->Department->Text);
			student.telephone = msclr::interop::marshal_as<std::string>(this->Telephone->Text);

			// Initalize Booklist if it null
			
			if (this->StudentList == nullptr) {
				this->StudentList = InitializeLinkedList<Student>();
			}

			// Add book into linked list
			this->StudentList = InsertLinkedList(this->StudentList, student);

			// Clear datagridview
			dataGridView1->Rows->Clear();
			
			// Display data in linked list
			TraverseLinkedList(dataGridView1, StudentList, DisplayStudentIntoDatagridWithoutID);

			// Clear textbox
			this->StudentName->Text = "";
			this->age->Value = 16;

			// Uncheck both radio box
			this->Male->Checked = false;
			this->Male->Checked = false;
			
			this->Department->Text = "";
			this->Telephone->Text = "";
		}

		
	};
}
