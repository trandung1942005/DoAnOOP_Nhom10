#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include"library.h"

class Employee {
private:
    std::string id;
    std::string password;
    bool isAdmin; // Thêm thuộc tính này: true nếu là tài khoản chủ, false nếu là nhân viên thường

public:
    // Cập nhật constructor để nhận thêm tham số isAdmin
    Employee(std::string i, std::string p, bool admin = false); // Mặc định là false nếu không truyền
    Employee(std::string i, std::string p);
    std::string getId() const;
    std::string getPassword() const;
    void setPassword(std::string newPassword);
    // Thêm getter cho thuộc tính isAdmin
    bool getIsAdmin() const;
    void savePassword() const;

}; 


#endif // EMPLOYEE_H
