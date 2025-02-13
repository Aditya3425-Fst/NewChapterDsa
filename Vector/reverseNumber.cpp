#include <iostream>
#include <vector>

using namespace std;
void reverseNumber(vector<int>& nums){
    int start = 0;
    int end = nums.size()-1;

    while(start <= end){
        swap(nums[start],nums[end]);
        start++;
        end--;
    }
     cout << "inside function" << endl;
    for (int i = 0; i < nums.size(); i++)
    {

        cout << nums[i];
    }
    cout << endl;
}
int main(){
   vector<int> nums = {1,3,5,6,8,9};
   reverseNumber(nums);
   cout << "main function" << endl;
   for(int i =0;i<nums.size();i++){
     cout << nums[i] ;
     
   }
   cout << endl;
}