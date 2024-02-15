// Sort an array of 0s, 1s and 2s
// Link: https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
// ----------------------------------------------------------------------
#include <iostream>
using namespace std;

class Solution
{
public:
    // Best Approach - DNF algo --------------
    void sort012(int arr[], int n)
    {
        int low = 0, mid = 0, high = n - 1, temp;
        while (mid <= high)
        {
            if (arr[mid] == 0)
            {
                temp = arr[low];
                arr[low] = arr[mid];
                arr[mid] = temp;
                low++, mid++;
            }
            else if (arr[mid] == 1)
            {
                mid++;
            }
            else
            {
                temp = arr[mid];
                arr[mid] = arr[high];
                arr[high] = temp;
                high--;
            }
        }
    }
};

int main()
{
    int N; // Size of arary
    int arr[N];
    for (int i = 0; i < 0; i++)
        cin >> arr[i];

    Solution s1;
    s1.sort012(arr, N);

    return 0;
}

/* Better Approach ---------------------------
    void sort012(int arr[], int n)
    {
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
                cnt0++;
            else if (arr[i] == 1)
                cnt1++;
            else
                cnt2++;
        }

        for (int i = 0; i < cnt0; i++)
            arr[i] = 0;
        for (int i = cnt0; i < cnt0 + cnt1; i++)
            arr[i] = 1;
        for (int i = cnt0 + cnt1; i < n; i++)
            arr[i] = 2;
    }
*/