#include <iostream>
using namespace std;

int main()
{

        int nums[5] = {1,2,34,5,6};
        int currSum = 0;
        int maxSum = INT_MIN;
        for (int val : nums)
        {
            currSum = currSum + val;
            maxSum = max(currSum, maxSum);
            if (currSum < 0)
            {
                currSum = 0;
            }
        }
        return maxSum;
    
}