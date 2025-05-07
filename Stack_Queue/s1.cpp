#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;

    // Push elements
    st.push(10);
    st.push(20);
    st.push(30);

    // Accessing the top element
    cout << "Top element: " << st.top() << endl; // 30

    // Removing the top element
    st.pop();
    cout << "Top after pop: " << st.top() << endl; // 20

    // Checking if empty
    cout << "Is empty: " << st.empty() << endl; // 0 (false)

    // Getting the size
    cout << "Size: " << st.size() << endl; // 2

    return 0;
}
