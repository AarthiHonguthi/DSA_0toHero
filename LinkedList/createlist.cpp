#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    { // Constructor
        data = val;
        next = NULL;
    }
};

int main()
{
    // Creating linked list: 2 → 4 → 6 → 8 → NULL
    Node *head = new Node(2);
    head->next = new Node(4);
    head->next->next = new Node(6);
    head->next->next->next = new Node(8);

    cout << "Linked List created successfully!" << endl;
    return 0;
}
