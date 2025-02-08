#include <iostream>
using namespace std;

int reverseNumber(int num){
    
    int reverse = 0;
    while (num != 0)
    {
        int res = num % 10;
        reverse = reverse * 10 + res;
        num = num/10;
    }
    return reverse;
}
int main(){
    cout << reverseNumber(234) << endl;
    return 0;
}