#pragma once

#include "Dashboard.h"
#include "Struct.h"

// Forward Declaration
void InitializeDatabase();

namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login_Form
	/// </summary>
	public ref class Login_Form : public System::Windows::Forms::Form
	{
	public:
		Login_Form(void)
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
		~Login_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ username;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ password;
	private: System::Windows::Forms::Button^ login;
	private: System::Windows::Forms::Button^ exit;










	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login_Form::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->login = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(202, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1393, 75);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to the Library Management System";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(357, 162);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(244, 51);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username :";
			// 
			// username
			// 
			this->username->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(361, 189);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(302, 56);
			this->username->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(357, 271);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(235, 51);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Password :";
			// 
			// password
			// 
			this->password->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(361, 298);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(302, 56);
			this->password->TabIndex = 4;
			this->password->UseSystemPasswordChar = true;
			// 
			// login
			// 
			this->login->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->login->BackColor = System::Drawing::Color::MediumBlue;
			this->login->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login->ForeColor = System::Drawing::Color::White;
			this->login->Location = System::Drawing::Point(565, 365);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(98, 35);
			this->login->TabIndex = 5;
			this->login->Text = L"Login";
			this->login->UseVisualStyleBackColor = false;
			this->login->Click += gcnew System::EventHandler(this, &Login_Form::login_Click);
			// 
			// exit
			// 
			this->exit->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->exit->BackColor = System::Drawing::Color::SlateGray;
			this->exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exit->ForeColor = System::Drawing::Color::White;
			this->exit->Location = System::Drawing::Point(361, 365);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(98, 35);
			this->exit->TabIndex = 6;
			this->exit->Text = L"Exit";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &Login_Form::exit_Click);
			// 
			// Login_Form
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1064, 681);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->login);
			this->Controls->Add(this->password);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->username);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Login_Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login_Form";
			this->Load += gcnew System::EventHandler(this, &Login_Form::Login_Form_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	// Open dashboard
	private: System::Void login_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username->Text == "admin" && password->Text == "admin") {
			Dashboard^ dashboard = gcnew Dashboard;
			this->Hide();
			dashboard->Show();
		}
	}
	private: System::Void Login_Form_Load(System::Object^ sender, System::EventArgs^ e) {
		InitializeDatabase();
	}
};
}
