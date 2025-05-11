#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st; // Creating a stack of integers
    int n = 5;     // Number of elements to push

    // Push 5 elements onto the stack
    for (int i = 1; i <= n; i++)
    {
        st.push(i * 10); // Pushing multiples of 10 (10, 20, 30, 40, 50)
    }

    cout << "Popping all elements from the stack:\n";

    // Pop all elements from the stack and print
    while (!st.empty())
    {
        cout << st.top() << " "; // Print the top element
        st.pop();                // Pop the top element
    }

    cout << endl; // Print a newline for clarity
    return 0;
}
