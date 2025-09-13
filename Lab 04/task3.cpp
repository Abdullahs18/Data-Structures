#include <iostream>
using namespace std;

int binarysearch(int n,int array[],int target){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(array[mid]==target){
            return mid;
        }
        else if(array[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

int main (){
    int n;
    cout <<"Enter Number of elements: ";
    cin >>n;

    int array[n];
    cout <<"Enter the elements in sorted order\n";
    for (int i=0;i<n;i++){
        cin >>array[i];
    }

    cout <<"Array:\n";
    for (int i=0;i<n;i++){
        cout <<array[i] <<" ";
    }
    cout <<"\n";

    int target;
    cout <<"Enter target value: ";
    cin >>target;

    int index=binarysearch(n,array,target);

    if(index!=-1){
        cout <<"Target found at index: " <<index;
    }
    else{
        cout <<"Target not found";
    }

    return 0;
}
