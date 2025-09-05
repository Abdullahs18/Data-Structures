#include <iostream>
using namespace std;

int main (){
int* ptr= new int;

*ptr=500;

cout <<"Value oF Dynamically Allocated Integer: " <<*ptr;
delete ptr;
return 0;
}


