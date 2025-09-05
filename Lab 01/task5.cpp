#include <iostream>
using namespace std;

int main (){
    int* array;
    int n;

    cout <<"Enter the number of elements you want to store in array: ";
    cin >>n;

    array=new int[n];

    for (int i=0;i<n;i++){
        cin >>array[i];



    }
    for (int i=0;i<n;i++){
        cout <<" " <<array[i];
    }

    delete [] array;
    return 0;
}