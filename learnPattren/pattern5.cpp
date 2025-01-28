#include <iostream>
using namespace std;

/*
1111
 222
  33
   4

Inverted Traingle Pattern - space + number problem . 

int main(){
    int n = 4;
    for(int i =0;i<n;i++){
        // space 
        for(int j = 0;j<i;j++){
            cout << " ";

        }
        // number
        for(int j = 0 ; j<n-i;j++){
            cout << i+1;
        }
        cout << endl;
    }
    return 0 ; 
}
*/

/*
AAAA
 BBB
  CC
   D
*/
int main(){
    int n = 4;
    char ch = 'A';
    for(int i =0 ;i<n;i++){
        // space
        for(int j =0 ; j<i;j++){
            cout << " ";
        }
        // number 
        for(int j =0;j<n-i;j++){
            cout << ch;
        }
        cout << endl;
        ch= ch+1;
    }
    return 0 ;
}