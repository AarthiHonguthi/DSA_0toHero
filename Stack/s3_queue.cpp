#include <iostream>
#include <queue>
using namespace std;

class StackQueue
{
    queue<int> q1, q2;

public:
    void push(int val)
    {
        q2.push(val);
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
    }

    void pop()
    {
        if (q1.empty())
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        q1.pop();
    }

    int top()
    {
        if (q1.empty())
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return q1.front();
    }

    bool isEmpty()
    {
        return q1.empty();
    }

    void print()
    {
        queue<int> temp = q1;
        while (!temp.empty())
        {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    }
};

int main()
{
    StackQueue s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.print(); // 30 20 10
    s.pop();
    s.print();       // 20 10
    cout << s.top(); // 20
    return 0;
}
