#include <bits/stdc++.h>

using namespace std;
int recursionSum (int num){
    int sum = 0;
    if(num<=9){
        return num;
    }
    return recursionSum(num%10+recursionSum(num/10));
        
        // int last = num%10;
        // sum = sum+last;
        // num = num/10;
        // recursionSum(num);
        // return sum;
    
}
int main(){
    int res = recursionSum(38);
    cout << res ;
}