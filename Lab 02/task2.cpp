#include <iostream>
using namespace std;

int array[2][3]={{1,2,8},{4,5,6}};


int main (){
    cout <<"2D Array in Matrix Form" <<"\n";
for (int i=0;i<2;i++){
    for (int j=0;j<3;j++){
        cout <<array[i][j] <<" ";
        

    }
    cout <<"\n";
}

    return 0;
}