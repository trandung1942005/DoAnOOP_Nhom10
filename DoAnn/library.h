#ifndef LIBRARY_H
#define LIBRARY_H
using namespace std;
#include <iostream>

#include <list>       //Được sử dụng để khai báo và quản lý danh sách các đối tượng Employee trong main.cpp (list<Employee> employees;).

#include <vector>     //Trong Hotel.h và Hotel.cpp: Được sử dụng để lưu trữ các đối tượng Room (vector<Room*> rooms;).
                      //Trong Room.h và Room.cpp: Hàm Room::loadRoomsFromFile trả về một vector<Room*>.
                      //Trong main.cpp: Được sử dụng tạm thời để lưu trữ danh sách nhân viên khi cập nhật tệp passwords.in (std::vector<Employee> updatedEmployees;).

#include <fstream>    //Lưu và tải trạng thái phòng (rooms.in).
                      //Lưu và tải thông tin đăng nhập nhân viên (passwords.in).
                      //Ghi và đọc lịch sử check-in/check-out (history.txt).
                      
#include <string>     //Được sử dụng cho hầu hết các biến văn bản như id, password, name, phone, type, filename, v.v. và các hàm như getline.
#include <limits>     //Được sử dụng với std::numeric_limits<std::streamsize>::max() trong cin.ignore() để loại bỏ hiệu quả tất cả các ký tự còn lại trong bộ đệm nhập, giúp xử lý lỗi nhập liệu và ngăn chặn vòng lặp vô hạn.
#include <iomanip>    // Bao gồm thư viện <iomanip>: Cung cấp các thao tác định dạng đầu ra (như 'setw' để căn chỉnh cột,'setprecision' để đặt số chữ số thập phân cho giá tiền).
#include <sstream>    //Được sử dụng trong Room.cpp (hàm Room::loadRoomsFromFile) để phân tích cú pháp từng dòng dữ liệu đọc từ tệp rooms.in. Mỗi dòng được đưa vào một stringstream, sau đó các phần tử riêng lẻ (loại phòng, số phòng, v.v.) được trích xuất từ chuỗi đó.

#include "Room.h"      // Khai báo lớp Room cơ sở và các lớp phòng cụ thể (SingleRoom, DoubleRoom, SuiteRoom)
#include "Hotel.h"     // Khai báo lớp Hotel, để quản lý các phòng và các hoạt động khách sạn
#include "Employee.h"  // Khai báo lớp Employee, để quản lý thông tin nhân viên (ID, mật khẩu)

#endif
