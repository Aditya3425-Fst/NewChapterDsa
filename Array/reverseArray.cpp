#include <iostream>
using namespace std;


void reverseArray(int arr[] , int sz){
    int start = 0 ;
    int end = sz-1;
    while(start <= end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int num[] = {1,4,6,8,9};
    int sz = 5;
     reverseArray(num , sz);
     for(int i =0;i<sz;i++){
        cout << num[i];
     }
     cout << endl;


    return 0;

}