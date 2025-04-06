#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> arr , int target){
    int st = 0;
    int end = arr.size()-1;
    while(st <= end){
        // int mid = (st + end)/2;
        int mid = st + (end - st)/2;
        if(arr[mid] == target){
            return mid;
        }
        if(target > arr[mid]){
            st = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    return -1;
}
int main(){
    // the binarySearch function will return the index  not the value of index . 
   vector<int> arr1 = {1,4,7,9,66,89,90};
   int target = 89;
    int res = binarySearch(arr1,target);
    cout << res;
    return 0;
}