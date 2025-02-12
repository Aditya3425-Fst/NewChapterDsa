#include <iostream>
using namespace std;

int main(){
    int marks[5] = {1,2,4,5,6};
    // sizeof - it will give you in the bytes 

    int sz = sizeof(marks) / sizeof(int);
    for(int i =0;i<sz;i++){
        if(marks[i] == 4){
            cout << marks[i] << endl;
        }
        else{
            cout << "not found" << endl;
        }
    }
    
} 