#include "Login_Form.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThread]

int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LibraryManagementSystem::Login_Form form;
	Application::Run(% form);
	return 0;
}