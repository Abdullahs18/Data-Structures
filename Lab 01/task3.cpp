#include <iostream>
using namespace std;


int main (){
int a=100;
int *ptr=&a;    
cout <<"a = " <<*ptr <<"\n";

*ptr=200;

cout <<"a = " <<*ptr;

return 0;

}
