#include <iostream>
#include <climits>

using namespace std;
  
int findSmall (int marks[] , int size){
    int small = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if(marks[i] < small){
            small = i;
          
        }
    }
    return small;
}
 int main(){
    int marks[5] = {34,1,67,-89,99};
    int size = 5;
    int smallest = findSmall(marks,size);
    cout << smallest;
    
    
    return 0;
 }