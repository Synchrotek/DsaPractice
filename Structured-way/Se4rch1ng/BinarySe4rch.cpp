#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int s = 0, e = n; // starting, sending
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    // Element to search
    int key;
    cin >> key;

    cout << binarySearch(arr, N, key);

    return 0;
}