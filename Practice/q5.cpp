// calling object in different class qna
#include <iostream>
#include <string>
using namespace std;

class Address {
private:
    string street = "kila";
    string city = "dhdk";
    int zipcode = 26267;

public:
    void displayStreet() {
        cout << street;
    }

    void displayCity() {
        cout << city;
    }

    void displayZipcode() {
        cout << zipcode;
    }
};

class Employ {
private:
    int id = 909;
    float salary = 4500;

public:
    void display() {
        Address a;

        cout << "id: " << id << endl;
        cout << "salary: " << salary << endl;

        cout << "city: ";
        a.displayCity();
        cout << endl;

        cout << "street: ";
        a.displayStreet();
        cout << endl;

        cout << "zipcode: ";
        a.displayZipcode();
        cout << endl;
    }
};

int main() {
    Employ a;
    a.display();

    return 0;
}