#ifndef ROOM_H
#define ROOM_H
#include"library.h"
using namespace std;

class Room {
protected:
    int roomNumber;
    double price;
    bool isOccupied;
    string occupantName;
    string occupantPhone;
    int soNgayThue = 0;
public:
    Room(int number, double price);
    int getSoNgayThue() const { return soNgayThue; }
    virtual ~Room();
    virtual string getRoomType() const = 0;
    virtual void displayInfo() const = 0;
    int getRoomNumber() const;
    double getPrice() const;
    bool getOccupancyStatus() const;
    string getOccupantName() const;
    string getOccupantPhone() const;
    virtual void checkIn(const string& name, const string& phone, int days);
    virtual void checkOut();
    virtual void saveStatus(ostream& out) const;
    static vector<Room*> loadRoomsFromFile(const string& filename);
};

class SingleRoom : public Room {
public:
    SingleRoom(int number, double price);
    string getRoomType() const override;
    void displayInfo() const override;
};

class DoubleRoom : public Room {
public:
    DoubleRoom(int number, double price);
    string getRoomType() const override;
    void displayInfo() const override;
};

class SuiteRoom : public Room {
public:
    SuiteRoom(int number, double price);
    string getRoomType() const override;
    void displayInfo() const override;
};

#endif
