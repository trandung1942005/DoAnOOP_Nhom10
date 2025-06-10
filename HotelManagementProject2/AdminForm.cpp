#pragma once
#include "Login.h"
#include "AdminForm.h"


System::Void HotelManagementProject2::AdminForm::btnSignOut_Click(System::Object^ sender, System::EventArgs^ e) {
    System::Windows::Forms::DialogResult result =
        MessageBox::Show(L"Do you want to Sign Out?", L"Notification",
            MessageBoxButtons::YesNo, MessageBoxIcon::Question);

    if (result == System::Windows::Forms::DialogResult::Yes) {
        this->Hide();
        HotelManagementProject2::Login^ loginForm = gcnew HotelManagementProject2::Login();
        loginForm->ShowDialog();
        this->Close(); 
    }
}




