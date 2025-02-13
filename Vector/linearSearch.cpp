#include <iostream>
#include <vector>

using namespace std;

int linearSearch(vector<int>& nums , int target){
   for(int val : nums){
    if(val == target){
        return val;
    }
   }
   return -1;
}
int main(){
    vector<int> nums = {1,2,6,8,9};
    int target  = 6;
    cout << linearSearch(nums,target);

    return 0;
}