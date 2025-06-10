#include "Login.h" 

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    
    HotelManagementProject2::Login loginForm;

    
    Application::Run(% loginForm);

    return 0;
}
