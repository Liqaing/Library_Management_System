#pragma once

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
	/// Summary for Update_Delete_Student
	/// </summary>
	public ref class Update_Delete_Student : public System::Windows::Forms::Form
	{

	// Declare variable
	private:
		Node<Student>* StudentList = nullptr;

	public:
		Update_Delete_Student(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		// Constructor to receive data from other form
		Update_Delete_Student(Node<Student>* studentlist, String^ student_id, String^ name, String^ age, String^ gender, String^ department, String^ telephone)
		{
			InitializeComponent();

			// Get pointer to student linked list
			this->StudentList = studentlist;

			this->StudentID->Text = student_id;
			this->StudentName->Text = name;
			this->Age->Text = age;
			this->Gender->Text = gender;
			this->Department->Text = department;
			this->Telephone->Text = telephone;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Update_Delete_Student()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ StudentID;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ add;
	private: System::Windows::Forms::TextBox^ Department;

	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ Age;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ StudentName;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Gender;
	private: System::Windows::Forms::TextBox^ Telephone;
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
			this->StudentID = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->add = (gcnew System::Windows::Forms::Button());
			this->Department = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Age = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->StudentName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Gender = (gcnew System::Windows::Forms::TextBox());
			this->Telephone = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Age))->BeginInit();
			this->SuspendLayout();
			// 
			// StudentID
			// 
			this->StudentID->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->StudentID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentID->Location = System::Drawing::Point(179, 56);
			this->StudentID->Name = L"StudentID";
			this->StudentID->ReadOnly = true;
			this->StudentID->Size = System::Drawing::Size(334, 23);
			this->StudentID->TabIndex = 41;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(51, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 18);
			this->label2->TabIndex = 40;
			this->label2->Text = L"Student ID";
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->BackColor = System::Drawing::Color::RoyalBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(415, 329);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 37);
			this->button2->TabIndex = 39;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Update_Delete_Student::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->BackColor = System::Drawing::Color::RoyalBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(298, 329);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 37);
			this->button1->TabIndex = 38;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Update_Delete_Student::button1_Click);
			// 
			// add
			// 
			this->add->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->add->BackColor = System::Drawing::Color::RoyalBlue;
			this->add->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add->ForeColor = System::Drawing::Color::White;
			this->add->Location = System::Drawing::Point(179, 329);
			this->add->Name = L"add";
			this->add->Size = System::Drawing::Size(98, 37);
			this->add->TabIndex = 37;
			this->add->Text = L"Cancel";
			this->add->UseVisualStyleBackColor = false;
			this->add->Click += gcnew System::EventHandler(this, &Update_Delete_Student::add_Click1);
			// 
			// Department
			// 
			this->Department->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Department->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Department->Location = System::Drawing::Point(179, 232);
			this->Department->Name = L"Department";
			this->Department->Size = System::Drawing::Size(334, 23);
			this->Department->TabIndex = 36;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(51, 237);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 18);
			this->label6->TabIndex = 35;
			this->label6->Text = L"Department";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(51, 189);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 18);
			this->label5->TabIndex = 33;
			this->label5->Text = L"Gender";
			// 
			// Age
			// 
			this->Age->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Age->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Age->Location = System::Drawing::Point(179, 141);
			this->Age->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->Age->Name = L"Age";
			this->Age->Size = System::Drawing::Size(334, 23);
			this->Age->TabIndex = 32;
			this->Age->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 16, 0, 0, 0 });
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(51, 141);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 18);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Age";
			// 
			// StudentName
			// 
			this->StudentName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->StudentName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentName->Location = System::Drawing::Point(179, 99);
			this->StudentName->Name = L"StudentName";
			this->StudentName->Size = System::Drawing::Size(334, 23);
			this->StudentName->TabIndex = 30;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(51, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 18);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Student Name";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(247, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 20);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Student Detail";
			// 
			// Gender
			// 
			this->Gender->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Gender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Gender->Location = System::Drawing::Point(179, 188);
			this->Gender->Name = L"Gender";
			this->Gender->Size = System::Drawing::Size(334, 23);
			this->Gender->TabIndex = 42;
			// 
			// Telephone
			// 
			this->Telephone->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Telephone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Telephone->Location = System::Drawing::Point(179, 277);
			this->Telephone->Name = L"Telephone";
			this->Telephone->Size = System::Drawing::Size(334, 23);
			this->Telephone->TabIndex = 44;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(51, 282);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(77, 18);
			this->label7->TabIndex = 43;
			this->label7->Text = L"Telephone";
			// 
			// Update_Delete_Student
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(572, 461);
			this->Controls->Add(this->Telephone);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Gender);
			this->Controls->Add(this->StudentID);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->add);
			this->Controls->Add(this->Department);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Age);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->StudentName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"Update_Delete_Student";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Update_Delete_Student";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Age))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		// Function to retrive studentlist pointer
		public: Node<Student>* GetStudentLinkedList() {
			return this->StudentList;
		}
		
		// Close form
		private: System::Void add_Click1(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}

		// Update Node
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			
			// Retrive input
			Student student;
			student.id = System::Convert::ToInt32(this->StudentID->Text);
			student.name = msclr::interop::marshal_as<std::string>(this->StudentName->Text);
			student.age = (int)(this->Age->Value);
			student.gender = msclr::interop::marshal_as<std::string>(this->Gender->Text);
			student.department = msclr::interop::marshal_as<std::string>(this->Department->Text);
			student.telephone = msclr::interop::marshal_as<std::string>(this->Telephone->Text);

			// Update data in linked list;
			this->StudentList = UpdateLinkedList(this->StudentList, student);

			// Update data in DB
			UpdateStudentInDB(student);

			this->Close();
		}

		// Delete Node
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			// Delete node form student linked list
			int id = System::Convert::ToInt32(this->StudentID->Text); // use system convert not (int) becuase it is from text box not number box

			this->StudentList = DeleteNodeFromLinkedList(this->StudentList, id);

			// Delete data from database
			DeleteStudentFromDB(id);

			this->Close();
		}
	};
}
	