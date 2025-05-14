//Insert At Bottom
#include <iostream>
#include <stack>
using namespace std;

// Recursive function to insert at bottom
void insertAtBottom(stack<int> &st, int val)
{
    if (st.empty())
    {
        st.push(val); //Base case
        return;
    }

    int temp = st.top(); //ek case hum solve karenge
    st.pop();

    insertAtBottom(st, val); // Recurse till bottom

    st.push(temp); // Backtrack
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    insertAtBottom(st, 99); // Insert 99 at bottom

    // Print stack to verify
    cout << "Stack after inserting at bottom: ";
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
