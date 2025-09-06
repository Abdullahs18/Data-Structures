#include <iostream>
using namespace std;

int main (){
int rows,col;
    cout <<"Enter rows: ";
    cin >> rows; 
    
    cout <<"Enter columns: "; 
    cin >>col;

    int** array=new int*[rows];
    for (int i=0;i<rows;i++){
        array[i]=new int [col];

    }
    cout <<"Enter Array Elements";
    for (int i=0;i<rows;i++){
        for (int j=0;j<col;j++){
        cin >>array[i][j];
        }
    }
    for (int i=0;i<rows;i++){
        for (int j=0;j<col;j++){
        cout <<array[i][j] <<" ";
        }
        cout <<"\n";
    }
    for (int i=0;i<rows;i++){
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
