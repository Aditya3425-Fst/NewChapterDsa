#include <bits/stdc++.h>

using namespace std;
bool isPossible(vector<int> &arr , int n , int m , int maxAllowed){
     int painters = 1;
     int time = 0;
     for( int i =0;i<n;i++){
        if(time + arr[i] <= maxAllowed){
            time+=arr[i];
        }else{
            painters++;
            time = arr[i];
        }
     }
     return painters <=m;
}
int painterPartition(vector<int> &arr , int n , int m ){
        int sum = 0;
        int max_val = INT_MIN;
        for(int i =0;i<n;i++){
            sum+=arr[i];
            max_val = max(max_val , arr[i]);
        }
        int st = max_val ;
        int end = sum;
        int ans = -1;
        while(st <= end){
            int mid = st+(end-st)/2;
            if(isPossible(arr,n,m,mid)){
                ans = mid;
                end = mid -1;

            }else{
                st = mid +1;
            }
            return ans;
        }
}
int main(){

    return 0;
}