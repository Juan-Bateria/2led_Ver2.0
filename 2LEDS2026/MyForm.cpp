#include "MyForm.h"
using namespace System::IO::Ports;
using namespace System;
using namespace System::Windows::Forms;

[STAThread]

int main(array <String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	My2LEDS2026::MyForm form;
	Application::Run(%form);

	return 0;
}




