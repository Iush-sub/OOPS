#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    Student() {
        marks = 90;
    }

    friend void display(Student s); // this is a frnd function defined outside but can acess the private datatype
};

void display(Student s) {
    cout << "Marks = " << s.marks << endl;
}

int main() {
    Student s1;

    display(s1);

    return 0;
}