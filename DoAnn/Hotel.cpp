#include"library.h"

void Hotel::addRoom(Room* room) {
    rooms.push_back(room);
}
void Hotel::initializeRooms() {
    ifstream test(filename);
    if (test.good() && test.peek() != EOF) {
        test.close();
        rooms = Room::loadRoomsFromFile(filename);
        return;
    }
    if (rooms.empty()) {
    for (int i = 100; i < 110; ++i) this->addRoom(new SingleRoom(i, 100.00));
    for (int i = 200; i < 210; ++i) this->addRoom(new DoubleRoom(i, 150.00));
    for (int i = 300; i < 310; ++i) this->addRoom(new SuiteRoom(i, 200.00));
    saveToFile();
}
}

void Hotel::saveToFile() {
    ofstream fout(filename);
    for (Room* room : rooms) room->saveStatus(fout);
}

void Hotel::showFormattedRooms() {
    vector<string> types = {"Single", "Double", "Suite"};
    for (const string& type : types) {
        cout << "==============================\n";
        cout << "Room list " << type << "\n";
        cout << "==============================\n";
        cout << left
                << setw(13) << "Room Type"        << "|"
                << setw(13) << "Room Number"      << "|"
                << setw(12) << "Room Price"       << "|"
                << setw(10) << "Status"           << "|"
                << setw(25) << "Customer Name"    << "|"
                << setw(20) << "Phone number"     << "|"
                << setw(15) << "Number of Days"   << "|"
                << setw(15) << "Total Money"      << "" 
                <<endl;

        cout<< string(13, '-') << "|"
            << string(13, '-') << "|"
            << string(12, '-') << "|"
            << string(10, '-') << "|"
            << string(25, '-') << "|"
            << string(20, '-') << "|"
            << string(15, '-') << "|"
            << string(15, '-') << endl;

        for (Room* r : rooms) {
            if (r->getRoomType() == type) {
                int soNgay = r->getOccupancyStatus() ? r->getSoNgayThue() : 0;
                double tongTien = soNgay * r->getPrice();

                cout << left
                        << setw(13) << r->getRoomType()     << "|"
                        << setw(13) << r->getRoomNumber()   << "|"
                        << setw(12) << fixed << setprecision(2) << r->getPrice() << "|"
                        << setw(10) << (r->getOccupancyStatus() ? "Occupied" : "Vacant") << "|"
                        << setw(25) << (r->getOccupancyStatus() ? r->getOccupantName() : "") << "|"
                        << setw(20) << (r->getOccupancyStatus() ? r->getOccupantPhone() : "") << "|"
                        << setw(15) << (r->getOccupancyStatus() ? to_string(soNgay) : "") << "|"
                        << setw(15) << (r->getOccupancyStatus() ? to_string((int)tongTien) : "") << endl;
            }
        }
    }
}

void Hotel::checkInRoom() {
    int number, days;
    string name, phone;
    cout << "Enter the number of rooms you want to book: "; cin >> number;
    if (cin.fail()) {
    cin.clear(); // xóa trạng thái lỗi
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "Error: Please enter a valid room number!\n";
    return;
}
    for (Room* room : rooms) {
        if (room->getRoomNumber() == number) {
            if (room->getOccupancyStatus()) {
                cout << "Room is currently occupied.\n"; return;
            }
            cout << "Guest name: "; cin.ignore(); getline(cin, name);
            cout << "Guest phone number: "; getline(cin, phone);
            cout << "Number of rental days: ";
            cin >> days;

            if (cin.fail() || days <= 0) {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << " Invalid number of days.\n";
                return;
            }

            room->checkIn(name, phone, days);
            saveToFile();
            double tongTien = days * room->getPrice();
            ofstream log("history.txt", ios::app);
            log << "Check-in | Room: " << number 
                << " | Name: " << name 
                << " | Phone number: " << phone 
                << " | Days: " << days 
                << " | Total price: " << tongTien 
                << " | Status: Unpaid" << endl;
            cout << "Booking successful!\n";
            return;
        }
    }
    cout << "Room does not exist.\n";
}

void Hotel::checkOutRoom() {
    int number;
    cout << "Enter the number of rooms you want to check out: "; cin >> number;
    if (cin.fail()) {
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "Error: Please enter a valid room number!\n";
    return;
}
    for (Room* room : rooms) {
        if (room->getRoomNumber() == number) {
            if (!room->getOccupancyStatus()) {
                cout << "Room is currently vacant.\n"; return;
            }
            double tongTien = room->getSoNgayThue() * room->getPrice();
            ofstream log("history.txt", ios::app);
            log << "Check-out | Room: " << number 
                << " | Total paid: " << tongTien << endl;

            room->checkOut();
            saveToFile();
            cout << "Check-out successful!\n";
            return;
        }
    }
    cout << "Room does not exist.\n";
}

void Hotel::viewHistory() {
    ifstream fin("history.txt");
    if (!fin.is_open()) {
        cout << "⚠️ Cannot open history file.\n";
        return;
    }

    cout << "\n========= CHECK-IN/CHECK-OUT HISTORY =========\n";
    string line;
    while (getline(fin, line)) {
        cout << line << endl;
    }
    cout << "==============================================\n";
    fin.close();
}