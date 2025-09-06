#include <iostream>
using namespace std;

int array[5]={1,2,3,4,5};

int main (){
    cout <<"Array Elements:";
    for (int i=0;i<5;i++){
        cout <<array[i] <<" ";

    }
    cout <<"\n";
    int sum=0;
    for (int i=0;i<5;i++){
        sum=sum+array[i];

    }
    cout <<"Sum oF Array:" <<sum;
    return 0;
}