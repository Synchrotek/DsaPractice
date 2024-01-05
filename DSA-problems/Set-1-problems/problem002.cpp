// Find minimum and maximum element in an array
// Link: https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1

#include <iostream>
#include <utility>
using namespace std;

pair<long long, long long> getMinMax(long long a[], int n)
{
    pair<long long, long long> p = {-1, -1};
    if (a == NULL || n == 0)
    {
        return p;
    }
    int min = a[0];
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    p = {min, max};
    return p;
}

// Driver Code --------------------------------
int main()
{
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    pair<long long, long long> p = getMinMax(a, n);
    cout << "Min: " << p.first << endl;
    cout << "Max: " << p.second << endl;

    return 0;
}