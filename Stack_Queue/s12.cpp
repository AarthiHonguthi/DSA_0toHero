#include <iostream>
#include <stack>
using namespace std;

// Recursive function to insert an element in sorted order
void insertSorted(stack<int> &s, int element)
{
    // Base case: if stack is empty or top element is smaller
    if (s.empty() || element > s.top())
    {
        s.push(element);
        return;
    }

    // Hold the top element and recur
    int temp = s.top();
    s.pop();
    insertSorted(s, element);

    // Restore the held element
    s.push(temp);
}

// Recursive function to sort the stack
void sortStack(stack<int> &s)
{
    // Base case: if stack is empty
    if (s.empty())
        return;

    // Remove the top element
    int temp = s.top();
    s.pop();

    // Recur to sort the remaining stack
    sortStack(s);

    // Insert the removed element in sorted order
    insertSorted(s, temp);
}

// Helper function to print the stack
void printStack(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> s;
    s.push(30);
    s.push(10);
    s.push(20);
    s.push(50);
    s.push(40);

    cout << "Original Stack: ";
    printStack(s);


    // Sorting the stack
    sortStack(s);

    cout << "Sorted Stack: ";
    printStack(s);

    return 0;
}
