#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    Student(){
        name="Unknown";
    };
    Student(string name){
        this->name=name;
    };

};

int main (){
    Student s1;
    cout <<s1.name <<"\n";
    Student s2("Cristiano");
    cout <<s2.name;
    return 0;
}