#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;
class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n, -1); // default to -1
        stack<int> st;          // stores **indices**

        for (int i = 2 * n - 1; i >= 0; i--)
        {
            int idx = i % n;

            // pop all smaller or equal elements
            while (!st.empty() && nums[st.top()] <= nums[idx])
            {
                st.pop();
            }

            // if stack not empty, it's the next greater
            if (!st.empty())
            {
                ans[idx] = nums[st.top()];
            }

            // push current index
            st.push(idx);
        }

        return ans;
    }
};
