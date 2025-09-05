#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    Student(){
        name="Unknown";
    };

};

int main (){
    Student s1;
    cout <<s1.name;
    return 0;
}