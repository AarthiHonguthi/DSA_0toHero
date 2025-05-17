#include <iostream>
#include <stack>
using namespace std;

class QueueStack
{
    stack<int> s1, s2;

public:
    void push(int val)
    {
        s1.push(val);
    }

    void pop()
    {
        if (s1.empty())
        {
            cout << "Queue Underflow" << endl;
            return;
        }
        while (s1.size() > 1)
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.pop();
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int getFront()
    {
        if (s1.empty())
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        while (s1.size() > 1)
        {
            s2.push(s1.top());
            s1.pop();
        }
        int front = s1.top();
        s2.push(front);
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return front;
    }

    bool isEmpty()
    {
        return s1.empty();
    }

    void print()
    {
        stack<int> temp;
        while (!s1.empty())
        {
            temp.push(s1.top());
            s1.pop();
        }
        while (!temp.empty())
        {
            cout << temp.top() << " ";
            s1.push(temp.top());
            temp.pop();
        }
        cout << endl;
    }
};

int main()
{
    QueueStack q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.print(); // 10 20 30
    q.pop();
    q.print();            // 20 30
    cout << q.getFront(); // 20
    return 0;
}
