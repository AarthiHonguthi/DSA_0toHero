//previous smaller element
#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;
class Solution
{
public:
    vector<int> previousSmallerElement(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> pse(n);
        stack<int> st;

        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && st.top() >= nums[i])
            {
                st.pop();
            }

            if (st.empty())
            {
                pse[i] = -1;
            }
            else
            {
                pse[i] = st.top();
            }

            st.push(nums[i]);
        }

        return pse;
    }
};
