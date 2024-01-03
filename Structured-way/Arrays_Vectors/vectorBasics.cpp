#include <iostream>
#include <vector>
using namespace std;

// If want to change vector value in function then
// pass the vector by refernce not by value as below
void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    // v.size // O(1)
    cout << endl;
}

int main()
{
    int a[10];
    vector<int> v1;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int val;
        cin >> val;
        v1.push_back(val);
    }
    display(v1);

    cout << "-----------------" << endl;

    vector<int> v2(5, 2);
    v2.push_back(3);
    v2.push_back(4); // O(1)
    display(v2);
    v2.pop_back(); // O(1)
    display(v2);

    cout << "-----------------" << endl;

    vector<int> v3 = v1; // copy by value: O(n)
    v3.push_back(5);
    display(v3);
    display(v1);

    vector<int> &v4 = v1; // copy by reference
    v4.push_back(5);
    display(v4);
    display(v1);

    return 0;
}