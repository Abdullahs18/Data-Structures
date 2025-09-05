#include <iostream>
using namespace std;

class Box {
public:
    int* ptr;

    Box() {
        ptr = new int;
        *ptr = 0;
    }

    Box(int val) {
        ptr = new int;
        *ptr = val;
    }

    Box(const Box& other) {
        ptr = new int;
        *ptr = *other.ptr;
    }

    Box& operator=(const Box& other) {
        if (this != &other) {
            delete ptr;
            ptr = new int;
            *ptr = *other.ptr;
        }
        return *this;
    }

    ~Box() {
        cout << "Box Memory Freed" << "\n";
        delete ptr;
    }
};

int main() {
    Box b1(100);
    Box b2 = b1;

    *b2.ptr = 200;

    cout << *b1.ptr << "\n";
    cout << *b2.ptr << "\n";

    Box b3;
    b3 = b1;

    *b3.ptr = 300;

    cout << *b1.ptr << "\n";
    cout << *b3.ptr << "\n";

    return 0;
}
