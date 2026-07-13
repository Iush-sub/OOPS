#include <iostream>
using namespace std;
// using array in object as object also serves as a variable.
class Student {
public:
    string name;

    void input() {
        cin >> name;
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s[3];    // Array of 3 Student objects

    cout << "Enter names:\n";
    for(int i = 0; i < 3; i++) {
        s[i].input();
    }

    cout << "\nStudent Names:\n";
    for(int i = 0; i < 3; i++) {
        s[i].display();
    }

    return 0;
}
