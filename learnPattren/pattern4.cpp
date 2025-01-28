#include <iostream>
using namespace std;
//  reverse traingle.

/*

1
21
321
4321


int main(){
    int  n = 4;
  for(int i =0 ; i<n;i++){
    for(int j = i+1 ; j>= 1;j--){
          cout << j ;
    }
    cout << endl;
  }
 return 0 ;
}
*/

/*
1
23
456
78910
*/
int main(){
  int n = 4;
  int num = 1;
  for(int i =0;i<n ; i++){
    for(int j =1 ;j<=i+1;j++){
        cout << num;
        num++;
    }
    cout << endl;
  }
  return 0 ; 
}