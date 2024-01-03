#include <iostream>
#include <utility>
using namespace std;

int main()
{
    // Declare and initialize pair --
    pair<int, string> p;
    p = make_pair(2, "abc");
    // p = {2, "abc"};
    cout << p.first << " "
         << p.second << endl;

    // Copy pair by value -----------
    pair<int, string> p1 = p;
    p1 = {3, "xyz"};
    cout << p.first << " "
         << p.second << " : ";
    cout << p1.first << " "
         << p1.second << endl;

    // Copy pair by reference -------
    pair<int, string> &p2 = p;
    p2 = {4, "xyz"};
    cout << p.first << " "
         << p.second << " : ";
    cout << p2.first << " "
         << p2.second << endl;

    // Array of pairs ----------------
    pair<int, int> p_arr[3];
    p_arr[0] = {1, 2};
    p_arr[1] = {2, 3};
    p_arr[2] = {3, 4};
    for (int i = 0; i < 3; i++)
    {
        cout << p_arr[i].first << " "
             << p_arr[i].second << " : ";
    }
    cout << endl;
    swap(p_arr[0], p_arr[2]);
    for (int i = 0; i < 3; i++)
    {
        cout << p_arr[i].first << " "
             << p_arr[i].second << " : ";
    }

    return 0;
}