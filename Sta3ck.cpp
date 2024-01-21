// Problem: Next Greater Element I
// Problem Link: https://leetcode.com/problems/next-greater-element-i

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        int n = nums2.size();
        stack<int> st;
        vector<int> res(n);
        for (int i = (2 * n) - 1; i >= 0; i--)
        {
            while (!st.empty() && nums2[i % n] >= st.top())
            {
                st.pop();
            }
            if (i < n)
            {
                st.empty() ? res[i] = -1 : res[i] = st.top();
            }
            st.push(nums2[i % n]);
        }
        return res;
    }
};

int main()
{
    int n1, n2, vals;
    cin >> n1 >> n2;
    vector<int> nums1;
    vector<int> nums2;
    for (int i = 0; i < n1; i++)
    {
        cin >> vals;
        nums1.push_back(vals);
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> vals;
        nums2.push_back(vals);
    }
    Solution s = Solution();
    nums2 = s.nextGreaterElement(nums1, nums2);
    for (int i = 0; i < nums2.size(); i++)
        cout << nums2[i] << " ";
    cout << endl;

    return 0;
}