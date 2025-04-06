#include <bits/stdc++.h>

using namespace std;

bool isPossible(vector<int> &arr, int N, int C,int minAllowed){
  int cows = 1;
  int lastStallPos = arr[0];
  for(int i =1;i<N;i++){
    if(arr[i] - lastStallPos >= minAllowed){
        cows++;
        lastStallPos = arr[i];
    }
    if (cows == C)
        return true;
  }
   return false;

}
  int aggressiveCow(vector<int> &arr , int N ,int C){
    sort(arr.begin(), arr.end());

    int st = 1;
    int end = arr[N-1] - arr[0];
    int ans = -1;
    while(st <= end){
        int mid = st+(end-st)/2;
        if(isPossible(arr,N,C,mid)){
            ans = mid;
            end  = mid -1;
        }else{
            st = mid+1;
        }
    }
  }
int main(){
  return 0;
}