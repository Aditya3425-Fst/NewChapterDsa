#include <iostream>
using namespace std;

/*
 *
 **
 ***
 ****
*/

// int main(){
//     int n = 6; 
//   for(int i =0 ; i<n ; i++){
//      for(int j =0;j<i+1;j++){
//         cout<< "*" << " " ;
//      }
//      cout << endl;
//   }
// }

/*
1
22
333
4444
*/

// int main(){
//    int n = 4; 
//    for(int i =0 ; i<n;i++){
//       for(int j =0;j<i+1;j++){
//          cout << i+1;
//       }
//       cout << endl;  
//    }
//    return 0 ; 
// }

// int main(){
//    int n = 5;
//    char ch = 'A';
//    for(int i =0;i<n;i++){

//       for(int j =0;j<i+1;j++){
//          cout << ch;
         
//       }
//       cout << endl;
//       ch = ch + 1;
//    }
// }

/*
1
12
123
1234
*/

int main(){
   int n = 4;
   for(int i =0;i<n;i++){
      for(int j=0;j<i+1;j++){
         cout << j+1;
      }
      cout << endl;
   }
   return 0 ; 
}