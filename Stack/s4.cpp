#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    if (!st.empty())
    {
        cout << "Top Element is: " << st.top() << endl;
    }
    else
    {
        cout << "Stack is empty" << endl;
    }
}