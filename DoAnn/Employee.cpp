// Employee.cpp
#include "Employee.h"
#include <iostream>
#include <fstream>
#include <vector> // Cần thiết để đọc lại và ghi lại file passwords.in nếu cần

// Cập nhật constructor
Employee::Employee(std::string i, std::string p, bool admin) : id(i), password(p), isAdmin(admin) {}

std::string Employee::getId() const {
    return id;
}

std::string Employee::getPassword() const {
    return password;
}

// Triển khai getter mới
bool Employee::getIsAdmin() const {
    return isAdmin;
}

void Employee::setPassword(std::string newPassword) {
    password = newPassword;
}

// Cập nhật hàm savePassword()
// Hàm này bây giờ sẽ chỉ thêm một nhân viên mới vào file
// Việc cập nhật/xóa mật khẩu của nhân viên cũ sẽ được xử lý trong main.cpp
void Employee::savePassword() const {
    std::ofstream outfile("passwords.in", std::ios::app); // Mở file ở chế độ append (thêm vào cuối)
    if (outfile) {
        // Ghi ID, mật khẩu và trạng thái isAdmin (0 hoặc 1)
        outfile << id << " " << password << " " << (isAdmin ? "1" : "0") << std::endl;
        outfile.close();
        
    }
    else {
        std::cerr << "Failed to open password file for writing in Employee::savePassword()." << std::endl;
    }
}
