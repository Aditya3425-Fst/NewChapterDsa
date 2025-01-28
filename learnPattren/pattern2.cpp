#include <iostream>
using namespace std;

/*
  123
  456
  789
*/

// int main(){
//    int n = 3;
//    int num = 1;
//   for(int i =0;i<n;i++){
      
//     for(int j =1;j<=n;j++){
//         cout << num <<" ";
//         num++;
//      }
//      cout << endl;
    
//   }
// }

/* ABC
   DEF
   GHI
*/

int main(){
    int n = 3;
    char ch = 'A';
    for(int i =0 ;i<n;i++){
       for(int j =0;j<n ; j++){
         cout<<ch;
         ch = ch+1;
       }
       cout << endl;
    }
}