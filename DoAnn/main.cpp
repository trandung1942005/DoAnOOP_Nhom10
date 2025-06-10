#include"library.h"

list<Employee> employees;


// Cập nhật hàm loadEmployees để đọc thêm trạng thái isAdmin
void loadEmployees() {
    ifstream infile("passwords.in");
    string id, password;
    int adminStatus; // Đọc trạng thái admin dưới dạng số nguyên (0 hoặc 1)
    employees.clear(); // Xóa danh sách cũ trước khi tải lại

    while (infile >> id >> password >> adminStatus) {
        employees.push_back(Employee(id, password, (adminStatus == 1))); // Chuyển đổi số nguyên sang bool
    }
    infile.close();
}

// Cập nhật hàm login để trả về con trỏ Employee*
// Nếu đăng nhập thành công, trả về con trỏ tới đối tượng Employee trong danh sách
// Nếu thất bại, trả về nullptr
Employee* login(string id, string password) {
    for (auto& emp : employees) { // Dùng auto& để có thể trả về địa chỉ của emp
        if (emp.getId() == id && emp.getPassword() == password) {
            std::cout << "Access granted" << std::endl;
            return &emp; // Trả về con trỏ tới đối tượng Employee đã đăng nhập
        }
    }
    std::cout << "Login failed!" << std::endl;
    return nullptr; // Trả về nullptr nếu không tìm thấy
}

void changePassword(Employee* loggedInEmployee) { // Hàm nhận con trỏ Employee của người đang đăng nhập
    if (!loggedInEmployee) {
        std::cerr << "Error: No employee logged in for password change.\n";
        return;
    }

    string oldPassword, newPassword;
    std::cout << "Enter current password: ";
    std::cin >> oldPassword;

    if (loggedInEmployee->getPassword() == oldPassword) { // Kiểm tra mật khẩu cũ trực tiếp từ đối tượng đang đăng nhập
        std::cout << "Enter new password: ";
        std::cin >> newPassword;
        loggedInEmployee->setPassword(newPassword);

        // Cập nhật mật khẩu trong file passwords.in
        // Cần đọc lại toàn bộ file, cập nhật và ghi lại
        std::ofstream outfile("passwords.in");
        if (outfile) {
            for (const auto& e : employees) { // Lặp qua danh sách employees đã được cập nhật
                outfile << e.getId() << " " << e.getPassword() << " " << (e.getIsAdmin() ? "1" : "0") << std::endl;
            }
            outfile.close();
            std::cout << "Password changed and saved successfully!" << std::endl;
        }
        else {
            std::cerr << "Failed to open password file for writing." << std::endl;
        }
    } else {
        std::cout << "Incorrect current password.\n";
    }
}


void addEmployee() {
    string id, password;
    int adminInput;
    bool isAdminNewEmployee;

    std::cout << "Enter new employee ID: ";
    std::cin >> id;
    // Check if ID already exists (optional but good practice)
    for (const auto& emp : employees) {
        if (emp.getId() == id) {
            std::cout << "Error: Employee ID already exists. Please choose a different ID.\n";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear buffer
            return;
        }
    }

    std::cout << "Enter new employee password: ";
    std::cin >> password;

    // Yêu cầu nhập quyền hạn cho nhân viên mới
    std::cout << "Is this employee an admin? (1 for Yes, 0 for No): ";
    std::cin >> adminInput;
    if (std::cin.fail() || (adminInput != 0 && adminInput != 1)) {
        std::cout << "Invalid input for admin status. Please enter 1 or 0. Employee will be added as regular user.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        isAdminNewEmployee = false; // Mặc định nếu nhập sai
    } else {
        isAdminNewEmployee = (adminInput == 1);
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear buffer after adminInput

    Employee newEmployee(id, password, isAdminNewEmployee);
    employees.push_back(newEmployee);

    // Ghi lại toàn bộ danh sách nhân viên vào file để đảm bảo trạng thái mới nhất
    std::ofstream outfile("passwords.in");
    if (outfile) {
        for (const auto& e : employees) {
            outfile << e.getId() << " " << e.getPassword() << " " << (e.getIsAdmin() ? "1" : "0") << std::endl;
        }
        outfile.close();
        std::cout << "Employee added successfully!" << std::endl;
    } else {
        std::cerr << "Failed to open password file for writing when adding employee." << std::endl;
    }
}

void removeEmployee() {
    string id;
    std::cout << "Enter employee ID to remove: ";
    std::cin >> id;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear buffer

    // Không cho phép xóa tài khoản đang đăng nhập
    // if (loggedInEmployee && loggedInEmployee->getId() == id) {
    //     std::cout << "You cannot remove your own account while logged in.\n";
    //     return;
    // }

    bool found = false;
    for (const auto& emp : employees) {
        if (emp.getId() == id) {
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "Error: Employee with ID '" << id << "' not found.\n";
        return;
    }

    // Xóa nhân viên khỏi danh sách employees (list::remove_if)
    employees.remove_if([&id](const Employee& emp) { return emp.getId() == id; });

    // Ghi lại toàn bộ danh sách nhân viên đã cập nhật vào file passwords.in
    std::ofstream outfile("passwords.in");
    if (outfile) {
        for (const auto& e : employees) {
            outfile << e.getId() << " " << e.getPassword() << " " << (e.getIsAdmin() ? "1" : "0") << std::endl;
        }
        outfile.close();
        std::cout << "Employee removed successfully!" << std::endl;
    }
    else {
        std::cerr << "Failed to open password file for writing when removing employee." << std::endl;
    }
}


int main() {
    loadEmployees();
    Hotel hotel;
    hotel.initializeRooms();
    int choice;
    string id_input, password_input; // Đổi tên biến để tránh trùng với biến thành viên của Employee
    Employee* loggedInUser = nullptr; // Con trỏ lưu trữ thông tin nhân viên đã đăng nhập

    // Login screen
    std::cout << "Enter your employee ID: ";
    std::cin >> id_input;
    std::cout << "Enter your password: ";
    std::cin >> password_input;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear buffer after password input

    loggedInUser = login(id_input, password_input); // Gọi hàm login

    if (loggedInUser) { // Nếu đăng nhập thành công
        do {
            cout << "\n===== HOTEL MANAGEMENT =====\n";
            cout << "1. View room status\n";
            cout << "2. Check-in\n";
            cout << "3. Check-out\n";
            cout << "4. View history\n";
            cout << "5. Change password\n";

            // Chỉ hiển thị tùy chọn thêm/xóa nhân viên nếu là tài khoản chủ
            if (loggedInUser->getIsAdmin()) {
                cout << "6. Add staff\n";
                cout << "7. Delete staff\n";
            }
            cout << "8. Exit\n";
            cout << "Select: ";

            cin >> choice;
            if (cin.fail()) {
                cout << "⚠️ Invalid input. Please enter a number from the menu.\n";
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                choice = 0; // Đặt choice về một giá trị không hợp lệ
                continue;
            }
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Consume the leftover newline

            switch (choice) {
            case 1:
                hotel.showFormattedRooms();
                break;
            case 2:
                hotel.checkInRoom();
                break;
            case 3:
                hotel.checkOutRoom();
                break;
            case 4:
                hotel.viewHistory();
                break;
            case 5:
                changePassword(loggedInUser); // Truyền con trỏ của nhân viên đang đăng nhập
                break;
            case 6:
                if (loggedInUser->getIsAdmin()) { // Kiểm tra lại quyền hạn trước khi thực hiện
                    addEmployee();
                } else {
                    cout << "⚠️ Access denied. Only admin accounts can add staff.\n";
                }
                break;
            case 7:
                if (loggedInUser->getIsAdmin()) { // Kiểm tra lại quyền hạn trước khi thực hiện
                    removeEmployee();
                } else {
                    cout << "Access denied. Only admin accounts can delete staff.\n";
                }
                break;
            case 8:
                cout << "Goodbye!\n";
                break;
            default:
                cout << "Invalid selection. Please choose a number between 1 and "
                     << (loggedInUser->getIsAdmin() ? "8" : "5") << ".\n"; // Cập nhật thông báo lỗi
            }
        } while (choice != 8);
        return 0;
    }
    return 1; // Đăng nhập thất bại
}
