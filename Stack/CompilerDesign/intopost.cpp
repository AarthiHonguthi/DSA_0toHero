#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
    int prec(char &ch)
    {
        if (ch == '^')
            return 3;
        else if (ch == '*' || ch == '/' || ch == '%')
            return 2;
        else if (ch == '+' || ch == '-')
            return 1;
        return -1;
    }

    string infixToPostfix(string &s)
    {
        stack<char> st;
        string ans = "";

        for (char ch : s)
        {
            // Operand
            if (isalpha(ch) || isdigit(ch))
            {
                ans += ch;
            }
            // ( case
            else if (ch == '(')
            {
                st.push(ch);
            }
            // ) case
            else if (ch == ')')
            {
                while (!st.empty() && st.top() != '(')
                {
                    ans += st.top();
                    st.pop();
                }
                if (!st.empty())
                    st.pop(); // pop '('
            }
            // Operator
            else
            {
                while (!st.empty() && st.top() != '(' && prec(ch) <= prec(st.top()))
                {
                    ans += st.top();
                    st.pop();
                }
                st.push(ch);
            }
        }

        // Pop all remaining operators
        while (!st.empty())
        {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};

int main()
{
    Solution sol;

    // Test cases
    string t1 = "A+(B*C-(D/E^F)*G)*H";
    string t2 = "a+b*(c^d-e)^(f+g*h)-i";
    string t3 = "A*(B+C)/D";
    string t4 = "(a+b)*(c+d)";
    string t5 = "A+B*C/D";
    string t6 = "A*(B+C)*(D+E)";
    string t7 = "a+(b*c/(d-e))";
    string t8 = "((A+B)*C-(D-E))";

    cout << "Test 1: " << sol.infixToPostfix(t1) << endl;
    cout << "Test 2: " << sol.infixToPostfix(t2) << endl;
    cout << "Test 3: " << sol.infixToPostfix(t3) << endl;
    cout << "Test 4: " << sol.infixToPostfix(t4) << endl;
    cout << "Test 5: " << sol.infixToPostfix(t5) << endl;
    cout << "Test 6: " << sol.infixToPostfix(t6) << endl;
    cout << "Test 7: " << sol.infixToPostfix(t7) << endl;
    cout << "Test 8: " << sol.infixToPostfix(t8) << endl;

    return 0;
}
