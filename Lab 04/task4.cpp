#include <iostream>
using namespace std;

void buublesort(int n,int array[]){
    for (int i=0;i<n-1;i++){
        bool isswap=false;
        for (int j=0;j<n-i-1;j++){
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
                isswap=true;
            }
        }
        if(!isswap){
            return ;
        }
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
    buublesort(n,array);
    for (int i=0;i<n;i++){
        cout <<array[i] <<" ";
    }
 

    return 0;
}