#include <iostream>
#include <stack>
using namespace std;

class MyStack
{
private:
    stack<int> st;

public:
    // Push an element onto the stack
    void push(int x)
    {
        st.push(x);
        cout << "Pushed: " << x << endl;
    }

    // Pop the top element from the stack
    void pop()
    {
        if (st.empty())
        {
            cout << "Stack Underflow: No elements to pop\n";
            return;
        }
        cout << "Popped: " << st.top() << endl;
        st.pop();
    }

    // Peek the top element of the stack
    int top()
    {
        if (st.empty())
        {
            cout << "Stack is empty\n";
            return -1;
        }
        return st.top();
    }

    // Check if the stack is empty
    bool isEmpty()
    {
        return st.empty();
    }

    // Get the current size of the stack
    int size()
    {
        return st.size();
    }
};

int main()
{
    MyStack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;
    s.pop();
    cout << "Top element after pop: " << s.top() << endl;
    cout << "Is empty: " << s.isEmpty() << endl;
    cout << "Stack size: " << s.size() << endl;

    return 0;
}
