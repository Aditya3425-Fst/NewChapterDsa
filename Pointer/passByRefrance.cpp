#include <bits/stdc++.h>

using namespace std;

// pass by refrence using pointer. 

// void changeA(int* ptr){ 
   
//     *ptr = 20;
  
// }
// int main(){
//  int a = 10;
//  changeA(&a);
//  cout << "inside function : " << a << endl;
//     return 0;
// }

// pass  by refrence using alias.
void changeA ( int &b){
   b = 20;
}
int main(){
 int a = 10;
 changeA(a);
 cout << "inside function : " << a << endl;
}