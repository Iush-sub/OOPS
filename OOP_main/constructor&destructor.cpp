#include <iostream>
using namespace std;

class Student {
public:
    // called second
    Student() {
        cout << "hello" << endl;
    }

    // called first
    ~Student() {
        cout << "world" << endl;
    }
};

int main() {
    Student s1;

    cout << "now the game" << endl;

    return 0;
}