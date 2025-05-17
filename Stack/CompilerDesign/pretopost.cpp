#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution
{
public:
    string preToPost(string prefix)
    {
        stack<string> st;

        // Traverse right to left
        for (int i = prefix.size() - 1; i >= 0; i--)
        {
            char ch = prefix[i];

            if (isalpha(ch))
            {
                st.push({ch});
            }
            else
            {
                string op1 = st.top();
                st.pop();
                string op2 = st.top();
                st.pop();
                string main = op1 + op2 + ch;
                st.push(main);
            }
        }

        return st.top();
    }
};

int main()
{
    Solution sol;
    string prefix = "*+ABC";
    cout << "Postfix: " << sol.preToPost(prefix) << endl;
    return 0;
}
