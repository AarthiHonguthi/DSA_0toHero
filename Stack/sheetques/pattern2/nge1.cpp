#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;
class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        int n1 = nums1.size(), n2 = nums2.size();
        // step 1
        vector<int> nge(n2);
        stack<int> st;
        int i = 0;
        while (i < n2)
        {
            int aanewala = nums2[i];
            while (!st.empty() && nums2[st.top()] < aanewala)
            {
                int idx = st.top();
                nge[idx] = aanewala;
                st.pop();
            }
            st.push(i);
            i++;
        }
        while (!st.empty())
        {
            nge[st.top()] = -1;
            st.pop();
        }
        unordered_map<int, int> mp; // key->element , value->index
        for (int i = 0; i < n2; i++)
        {
            mp[nums2[i]] = i;
        }
        vector<int> ans;
        for (int num: nums1)
        {
            ans.push_back(mp[num]);
        }
        return ans;
    }
};