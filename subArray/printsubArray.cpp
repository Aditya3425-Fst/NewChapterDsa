#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5};

    for (int st = 0; st < (int)arr1.size(); st++)
    {
        for (int end = st; end < (int)arr1.size(); end++)
        {
            for (int i = st; i <= end; i++)
            {
                cout << arr1[i] << " "; // Fix: Add space between numbers
            }
            cout << " | "; // Separator between subarrays
        }
        cout << endl; // New line for better formatting
    }

    return 0;
}
