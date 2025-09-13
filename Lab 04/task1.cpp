#include <iostream>
using namespace std;


void selectionsort(int n,int array[]){
    for (int i=0;i<n-1;i++){
        int smallest_index=i;
        for (int j=i+1;j<n;j++){
            if(array[j]<array[smallest_index]){
                smallest_index=j;
            }
        }
        swap(array[i],array[smallest_index]);
    }
};

int main (){
int n;
cout <<"Enter Number of elements: ";
cin >>n;

int array[n];
cout <<"Enter the elements";
cout <<"\n";
for (int i=0;i<n;i++){
    cin >>array[i];
}
cout <<"Unsorted Array:";  
cout <<"\n"; 
for (int i=0;i<n;i++){
    cout <<array[i] <<" ";
} 
cout <<"\n";
cout <<"Sorted Array";
cout <<"\n";
    selectionsort(n,array);
    for (int i=0;i<n;i++){
        cout <<array[i] <<" ";
    }
 

    return 0;
}