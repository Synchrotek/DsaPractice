// Kth max and min element of an array
// Link: https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1
// ----------------------------------------------------------------------
#include <iostream>
using namespace std;

class Solution
{
public:
    int kthSmallest(int arr[], int l, int r, int k)
    {
        // code here
    }
};

// Driver Code --------------------------------
int main()
{
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int number_of_elements;
        cin >> number_of_elements;
        int a[number_of_elements];

        for (int i = 0; i < number_of_elements; i++)
            cin >> a[i];

        int k;
        cin >> k;
        Solution ob;
        cout << ob.kthSmallest(a, 0, number_of_elements - 1, k) << endl;
    }
    return 0;
}