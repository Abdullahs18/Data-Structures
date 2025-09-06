#include <iostream>
using namespace std;





int main (){
int size;
cout <<"Enter the size of the array: ";
cin >>size;
int *array=new int[size];
cout <<"Enter Elements oF array: " <<"\n";
    for (int i=0;i<size;i++){
        cin >> array[i];

    }
    cout <<"Array Elements" <<"\n";
    for (int i=0;i<size;i++){
        cout <<array[i] <<" ";

    }
    int max=array[0];
    for (int i=0;i<size;i++){
        
        if (max<array[i]){
            max=array[i];

        }

    }
    cout <<"\n";
    cout <<"Maximum Element in Array: " <<max;

    delete [] array;
    return 0;

}