#include <bits/stdc++.h>

using namespace std;

bool isValid(vector<int> &arr , int n , int m , int maxAllowedPages){
     int std =  1;
     int pages = 0;
     for(int i =0;i<n;i++){
         if (arr[i] > maxAllowedPages)
         {
             return false;
         }
         if(pages + arr[i] <= maxAllowedPages){ //valid
            pages = pages +arr[i];
         }else{  // invalid
            std++;
            pages = arr[i];
         }
     }
     return std > m ? false : true;
}
int allocatedBooks (vector<int> &arr , int n , int m ){
    if(m > n) return -1;
    int sum = 0;
    for(int i =0;i<n;i++){
        sum = sum + arr[i];
    }
    int ans = -1;
    int st = 0; //range of possible Answer . 
    int end = sum ; 
    while(st <= end ){
        int mid = st+(end-st)/2;
        if(isValid(arr , n ,m,mid)){
            ans = mid;
            end = mid -1; // left

        }else{
              st = mid + 1;//right
        }
    }
    return ans;
}
int main (){
  vector<int> arr = {15,17,20};
  int n = 4, m = 2;
  cout << allocatedBooks(arr , n , m);
}