#include <iostream>
using namespace std;

class Exam {
public:
    char* ch_array;
    int n;

    Exam() {
        ch_array = nullptr;
        n = 0;
    }

    Exam(int alphabets) {
        n = alphabets;
        ch_array = new char[n];
    }

    Exam(const Exam& other) {
        n = other.n;
        ch_array = new char[n];
        for (int i = 0; i < n; i++) {
            ch_array[i] = other.ch_array[i];
        }
    }

    void name_func() {
        cout << "Enter Name: ";
        for (int i = 0; i < n; i++) {
            cin >> ch_array[i];
        }
    }

    ~Exam() {
        cout << "Memory is Freed" << "\n";
        delete[] ch_array;
    }
};

int main() {
    int n;
    cout << "Enter Number of alphabets for name: ";
    cin >> n;

    Exam e1(n);
    e1.name_func();
    cout << e1.ch_array << "\n";

    Exam e2 = e1;
    cout << e2.ch_array << "\n";

    e2.ch_array[0] = 'X';

    cout << e1.ch_array << "\n";
    cout << e2.ch_array << "\n";

    return 0;
}
