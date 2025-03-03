#include <bits/stdc++.h>

using namespace std;

int power(int x , int n ){
    if(n ==0){
        return 1;
    }
    return x * power(x,n-1);
}
int main(){
   int ans = power(3,2);
   cout << ans << endl;
   return 0;
}