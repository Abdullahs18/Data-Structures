#include <iostream>
using namespace std;


    int* resize_array(int* old_array,int old_size,int new_size)
    {
        if (new_size==old_size){
            return old_array;
        }
        int* new_array=new int[new_size];

        int limit =  (old_size<new_size) ? old_size:new_size;
        
            
            for (int i=0;i<limit;i++){
                new_array[i]=old_array[i];
            }
        

        delete[] old_array;
    return new_array;    

    }
int main (){
    int size=5;
    int* arr=new int[size]{1,2,3,4,5};

    cout <<"Original Array: ";
    for (int i=0;i<5;i++){
        cout <<arr[i] <<" " ;
    }
    int newsize=8;
    arr=resize_array(arr,size,newsize);
    cout <<"\n";
    for (int i=size;i<newsize;i++){
        cin >> arr[i];
    }
    cout <<"\n";
    for (int i=0;i<newsize;i++){
        cout <<arr[i] <<" " ;
    }
    size=newsize;
    newsize=3;
    arr=resize_array(arr,size,newsize);
    cout <<"\n";
    for (int i=0;i<newsize;i++){
        cout <<arr[i] <<" ";
    }

    delete[] arr;


    return 0;
}    

