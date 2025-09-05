
#include <iostream>
using namespace std;


class Exam{
    public:
    char* ch_array;
    int n;
    Exam(){}
    Exam(int alphabets){
        n=alphabets;
        ch_array=new char [n];
    }
    void name_func(){
        cout <<"Enter Name: ";
        for (int i=0;i<n;i++){
            cin >>ch_array[i];
            
        }

    }

    ~Exam(){
        delete [] ch_array;
    }
};
int main (){
    int n;
    cout <<"Enter Number of alphabets for name: " ;
    cin >>n;    
    Exam e1(n);
    e1.name_func();
    cout <<e1.ch_array <<"\n";

    Exam  e2=e1;
    cout <<e2.ch_array;

    return 0;
}