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

// Function to delete the head (first node)
void deleteHead(Node *&head)
{
    if (!head)
        return; // If the list is empty, do nothing

    Node *temp = head; // Store current head
    head = head->next; // Move head to the next node
    delete temp;       // Free memory of old head
}

// Function to delete a node at a given position
void deleteAtPosition(Node *&head, int pos)
{
    if (!head)
        return; // Empty list check

    if (pos == 1)
    { // If deleting the first node
        deleteHead(head);
        return;
    }

    Node *temp = head;
    int count = 1;
    while (temp != NULL && count < pos-1)
    {
        temp = temp->next; 
        count++;
    }

    if (!temp || !temp->next)
        return; // If position is out of bounds

    Node *nodeToDelete = temp->next; // Node to delete
    temp->next = temp->next->next;   // Bypass the node
    delete nodeToDelete;             // Free memory
}

// Function to delete the last node (tail)
void deleteTail(Node *&head)
{
    if (!head)
        return; // If list is empty, do nothing

    if (!head->next)
    { // If only one node exists
        delete head;
        head = NULL;
        return;
    }

    Node *temp = head;
    while (temp->next->next != NULL)
    { // Stop at second last node
        temp = temp->next;
    }

    delete temp->next; // Delete last node
    temp->next = NULL; // Update last node to NULL
}

// Function to print the linked list
void printList(Node *head)
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
    // Creating a linked list: 2 → 4 → 6 → 8 → NULL
    Node *head = new Node(2);
    head->next = new Node(4);
    head->next->next = new Node(6);
    head->next->next->next = new Node(8);

    cout << "Original List: ";
    printList(head);

    // Delete Head Node
    deleteHead(head);
    cout << "After deleting head: ";
    printList(head);

    // Delete Node at Position 2 (previously 6)
    deleteAtPosition(head, 2);
    cout << "After deleting node at position 2: ";
    printList(head);

    // Delete Tail Node
    deleteTail(head);
    cout << "After deleting tail node: ";
    printList(head);

    return 0;
}
