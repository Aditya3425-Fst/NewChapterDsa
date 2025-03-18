#include <bits/stdc++.h>

using namespace std;
 // doubt - we are not defining st as arr[0] and end - arr-1;
int recursiveBinarySearch(vector<int> arr , int tar , int st , int end ){
     if(st <= end){
        int mid = st+ (end - st)/2;
        if(tar > arr[mid]){
            return recursiveBinarySearch(arr , tar , mid+1,end);
        }else if(tar < arr[mid]){
            return  recursiveBinarySearch(arr, tar ,st , mid-1);
        }else{
            return mid; 
        }

     }
     return -1;
}
int main(){
    vector<int> arr = {1, 3, 6,8,9,34};
    int target = 1;
    cout << recursiveBinarySearch(arr , target ,0, arr.size() -1) << endl;
}