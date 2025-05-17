#include <iostream>
using namespace std;

// Node definition
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

// Stack class
class StackLL
{
    Node *top;

public:
    StackLL()
    {
        top = nullptr;
    }

    void push(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = top;
        top = newNode;
    }

    void pop()
    {
        if (top == nullptr)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        Node *temp = top;
        top = top->next;
        delete temp;
    }

    int peek()
    {
        if (top == nullptr)
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty()
    {
        return (top == nullptr);
    }

    void print()
    {
        Node *temp = top;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    StackLL s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.print();        // 30 20 10
    cout << s.peek(); // 30
    s.pop();
    s.print(); // 20 10
    s.pop();
    s.pop();
    s.pop();   // Stack Underflow
    s.print(); // Empty
    return 0;
}
