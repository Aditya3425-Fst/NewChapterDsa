#include <iostream>
using namespace std;
void intersection(int arr1[] , int arr2[] , int sz1 , int sz2){
    for(int i =0;i<sz1;i++){
        for(int j =0;j<sz2;j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i];
            }
        }
    }
}

int main(){
   int num1[] = {1,8,3,2,4};
   int sz1 = 5;
   int num2[] = {1,3,6,5,2};
   int sz2 = 5;
   intersection(num1,num2,sz1,sz2);

   
   
  
    

    return 0;
}