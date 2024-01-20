// Problem: Next Greater Element I
// Problem Link: https://leetcode.com/problems/next-greater-element-i

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> res = {12, 2, 3, 4, 5};
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