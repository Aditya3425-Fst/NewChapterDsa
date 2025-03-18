#include <iostream>

using namespace std;
int linearSeach(int arr[] , int sz,int target){
      for(int i =0;i<sz;i++){
        if(arr[i] == target){
            return i;
        }
      }
      return -1;
}

int main(){
    int arr[] = {1,2,4,78,80};
    int sz = 5;
    int target = 89;
    int index = linearSeach(arr,sz,target);
    cout << index ;


    return 0;
}
