#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int maxSum = INT_MIN;
    for (int st = 0; st < n; st++)
    {
        int subSum = 0;
        for (int end = st; end < n; end++)
        {
            subSum = subSum+arr[end];
            maxSum= max(maxSum,subSum);
             
        }
        
    }
    cout << "maximum Sum " << maxSum;
    return 0;
}