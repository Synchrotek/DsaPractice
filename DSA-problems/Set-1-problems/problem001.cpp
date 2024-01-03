// Reverse an Array/String
// ProblemLink: https://www.geeksforgeeks.org/problems/reverse-a-string/1
// ----------------------------------------------------------------------
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int left = 0;
        int right = s.size() - 1;
        while (left < right)
        {
            char tmp = s[left];
            s[left++] = s[right];
            s[right--] = tmp;
        }
    }
};

int main()
{
    string str;
    Solution solObj;
    getline(cin, str);
    vector<char> s(str.begin(), str.end());
    solObj.reverseString(s);
    for (auto &it : s)
    {
        cout << it << ' ';
    }

    return 0;
}