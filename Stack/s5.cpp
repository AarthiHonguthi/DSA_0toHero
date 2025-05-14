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
    st.pop();
    st.pop();
    st.push(598);
    cout << "Size of the stack: " << st.size() << endl;
}