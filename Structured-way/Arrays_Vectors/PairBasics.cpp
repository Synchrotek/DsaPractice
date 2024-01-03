#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, string> p;
    p = make_pair(2, "abc");
    cout << p.first << " "
         << p.second << endl;

    pair<int, string> p1 = p;
    p1 = {3, "xyz"};
    cout << p.first << " "
         << p.second << " : ";
    cout << p1.first << " "
         << p1.second << endl;

    pair<int, string> &p2 = p;
    p2 = {4, "xyz"};
    cout << p.first << " "
         << p.second << " : ";
    cout << p2.first << " "
         << p2.second << endl;

    return 0;
}