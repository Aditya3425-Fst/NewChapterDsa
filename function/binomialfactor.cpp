#include <iostream>
using namespace std;

int factorial(int n ){
    int fac = 1;
    for(int i =1;i<=n ; i++){
        fac = fac*i;
    }
    return fac;
}
int binominal(int n , int r){
     int facOfN = factorial(n);
     int facOfR = factorial(r);
     int facNOfR = factorial(n-r);

     return facOfN /(facOfR*facNOfR);
}
int main(){
    int n = 6 , r = 2;
   cout << binominal(n,r) << endl;
}