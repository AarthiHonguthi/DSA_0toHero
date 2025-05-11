#include <iostream>
#include <stack>
using namespace std;

// Recursive function to get the middle element
int solve(stack<int> &st, int &pos)
{
    if (pos == 1)
    {
        return st.top();
    }

    // Step 1: Work
    pos--;
    int temp = st.top();
    st.pop();

    // Step 2: Recursive call
    int ans = solve(st, pos);

    // Step 3: Backtrack - push element back
    st.push(temp);

    return ans;
}

// Main function to get middle element
int getMiddleElement(stack<int> &st)
{
    int pos = (st.size() / 2) + 1; // 1-based middle index
    return solve(st, pos);
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout << "Middle Element: " << getMiddleElement(st) << endl;

    // Optional: Print stack to verify it's unchanged
    cout << "Stack after operation: ";
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
