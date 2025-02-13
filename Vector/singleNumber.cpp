#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int>& nums){
   int value = 0;
   for(int val : nums){
     value = value ^ val;
     
   }
   return value;
   
}
int main(){
      vector<int> vec = {1,2,3,2,1};
      int output = singleNumber(vec);
      cout << output ;
      
    return 0;

}