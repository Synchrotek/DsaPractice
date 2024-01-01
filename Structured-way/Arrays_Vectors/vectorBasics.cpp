#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;

    // Insert in Vector
    v.push_back(2);
    v.push_back(4);
    v.push_back(10);

    // Traverse Method 1
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // Traverse Method 2
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    // Traverse Method 3
    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << endl;

    // delete/pop from vector
    v.pop_back();

    vector<int> v2(3, 50);
    for (auto element : v2)
        cout << element << " ";
    cout << endl;

    // Swapped values of vector v and v2
    swap(v, v2);
    for (auto element : v)
        cout << element << " ";
    cout << endl;
    for (auto element : v2)
        cout << element << " ";
    cout << endl;

    return 0;
}