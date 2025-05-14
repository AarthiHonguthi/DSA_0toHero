#include <iostream>
#include <stack>
using namespace std;

// Function to insert an element in a sorted stack
void sortedInsert(stack<int> &s, int element)
{
    // Base case: if the stack is empty or the top element is smaller, push the element
    if (s.empty() || element < s.top())
    {
        s.push(element);
        return;
    }

    // Remove the top element
    int temp = s.top();
    s.pop();

    // Recursive call
    sortedInsert(s, element);

    // Restore the removed element
    s.push(temp);
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
    s.push(20);
    s.push(10);
    s.push(5);

    int newElement = 15;
    cout << "Original Stack: ";
    printStack(s);



    // Inserting element
    sortedInsert(s, newElement);

    cout << "Stack after inserting " << newElement << ": ";
    printStack(s);

    return 0;
}
