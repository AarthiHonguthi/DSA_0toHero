#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution
{
public:
    string posttoin(string &postfix)
    {
        stack<string> st;
        for (char ch : postfix)
        {
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
                string main = "(" + op2 + ch + op1 + ")";
                st.push(main);
            }
        }
        return st.top();
    }
};

int main()
{
    Solution sol;
    string postfix = "AB+C*";
    cout << "Prefix: " << sol.posttoin(postfix) << endl;
    return 0;
}
