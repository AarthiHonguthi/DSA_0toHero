#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        st.push(s[i]);
    }
    string reversed = "";
    while (!st.empty())
    {
        reversed += st.top();
        st.pop();
    }
    cout << reversed << endl;
}