#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Function to traverse and print the Linked List
void traverse(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " → ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = new Node(2);
    head->next = new Node(4);
    head->next->next = new Node(6);
    head->next->next->next = new Node(8);

    cout << "Linked List: ";
    traverse(head);

    return 0;
}
