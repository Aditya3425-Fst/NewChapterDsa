#include <iostream>

using namespace std;
int factorial (int n){
  if(n < 2){
    return 1;
  }
  return n * factorial(n-1);
}
int main(){
  int ans = factorial(5);
  cout << ans ; 
}