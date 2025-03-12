#include <bits/stdc++.h>

using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;
    int** ptr2 = &ptr;
    int* ptr3 = NULL;

    
    cout << &a << endl; // print the address
    cout << ptr << endl; // print - veriable - pointer
    cout << &ptr << endl;// print the address of ptr
    cout << ptr2 << endl;// print pointer to pointer
    cout << *(&a) << endl; // print value a
    cout << *ptr << endl; // print the value 
    cout << *(*ptr2) << endl; // print the value 
    cout << ptr3 << endl;


    return 0;
}