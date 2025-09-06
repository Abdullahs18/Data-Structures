#include <iostream>
using namespace std;

int main (){
    // int n;
    // cout <<"Enter Size of array: ";
    // cin >>n;

    // int* array=new int [n];

    // for (int i=0;i<n; i++){
    //     cin >>array[i];

    // }
    // for (int i=0;i<n;i++){
    //     cout <<array[i];
    // }
    //delete [] array;
    // return 0;
    int rows,col;
    cout <<"Enter rows";
    cin >> rows; 
    
    cout <<"Enter columns"; 
    cin >>col;

    int** array=new int*[rows];
    for (int i=0;i<rows;i++){
        array[i]=new int [col];

    }
    for (int i=0;i<rows;i++){
        for (int j=0;j<col;i++){
            cin >>array[i][j];
        }
    }
    for (int i=0;i<rows;i++){
        for (int j=0;j<col;i++){
            cout <<array[i][j];
        }
    }
    for (int i=0;i<rows;i++){
        delete[] array[i];
    }
    delete[] array;

    return 0;
}