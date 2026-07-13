#include <iostream>
using namespace std;

int main() {
    int original = 50;
    int &ref = original;      // ref is an alias of original

    cout << "original = " << original << ", ref = " << ref << endl;

    ref = 100;                 // modifies 'original' too
    cout << "After ref = 100 -> original = " << original << endl;

    original = 200;            // reflects in ref too
    cout << "After original = 200 -> ref = " << ref << endl;

    return 0;
}