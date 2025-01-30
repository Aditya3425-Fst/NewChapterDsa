#include <iostream>
using namespace std;


int minOfTwo(int a , int b){
    if(a<b){
        return a;
    }
    return b;
}

int factorial(int n ){
     int fact = 1;
     for(int i = 1;i<=n;i++){
        fact *= i ;
     }
     return fact;
}

int sumOfDigits(int num){
   int digSum = 0;
   while(num > 0){
     int lastDigit = num%10;
      num/= 10;
      digSum= digSum+lastDigit;

   }
   return digSum;
}

int main(){
   cout << "sum " << sumOfDigits(1234) << endl;
    return 0; 
}