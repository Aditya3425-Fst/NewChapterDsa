#include <iostream> 
using namespace std;

/*
      1
     121
    12321
   1234321
*/
int main(){
    int n = 4;
   for(int i=0;i<n;i++){
      //  spaces.
         for(int j =0 ; j< n-i-1;j++){
            cout << " ";
         }
    //   number    
         for(int j =1;j<=i+1;j++){
            cout << j;
         }
    //  number 
        for(int j = i ; j>=1;j--){
            cout << j;
        }
        cout  << endl;
   }

return 0;
 
}