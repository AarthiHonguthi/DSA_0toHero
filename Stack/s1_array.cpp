#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int size;
    int top;

public:
    // Constructor
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // 1. Push an element onto the stack
    void push(int data)
    {
        if (isFull())
        {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = data;
        cout << "Pushed: " << data << endl;
    }

    // 2. Pop the top element from the stack
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow\n";
            return -1;
        }
        int poppedElement = arr[top--];
        cout << "Popped: " << poppedElement << endl;
        return poppedElement;
    }

    // 3. Peek the top element of the stack
    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }

    // 4. Check if the stack is empty
    bool isEmpty()
    {
        return top == -1;
    }

    // 5. Check if the stack is full
    bool isFull()
    {
        return top == size - 1;
    }

    // 6. Get the current size of the stack
    int getSize()
    {
        return top + 1;
    }

    // 7. Clear the stack
    void clear()
    {
        top = -1;
        cout << "Stack Cleared\n";
    }

    // 8. Print all elements (for debugging)
    void printStack()
    {
        if (isEmpty())
        {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack Elements: ";
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor to free memory
    ~Stack()
    {
        delete[] arr;
        cout << "Stack memory released\n";
    }
};

int main()
{
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.printStack();

    cout << "Top Element: " << s.peek() << endl;
    s.pop();
    cout << "Current Size: " << s.getSize() << endl;
    s.printStack();

    s.clear();
    s.printStack();

    cout << "Is Empty: " << s.isEmpty() << endl;
    cout << "Is Full: " << s.isFull() << endl;

    return 0;
}
