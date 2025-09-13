#include <iostream>
using namespace std;

void insertionsort(int n,int array[]){
    for (int i=1;i<n;i++){
        int current=array[i];
        int previous=i-1;
        while (previous>=0 && array[previous]>current){
            array[previous+1]=array[previous];
            previous--;
        }
        array[previous+1]=current;
    }
}

int main (){
    int n;
    cout <<"Enter Number of elements: ";
    cin >>n;

    int array[n];
    cout <<"Enter the elements\n";
    for (int i=0;i<n;i++){
        cin >>array[i];
    }

    cout <<"Unsorted Array:\n";  
    for (int i=0;i<n;i++){
        cout <<array[i] <<" ";
    } 
    cout <<"\n";

    cout <<"Sorted Array:\n";
    insertionsort(n,array);
    for (int i=0;i<n;i++){
        cout <<array[i] <<" ";
    }

    return 0;
}
