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

void reverseIterative(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;

    while (curr != NULL)
    {
        next = curr->next; // Store next node
        curr->next = prev; // Reverse link
        prev = curr;       // Move prev to current
        curr = next;       // Move current to next
    }

    head = prev; // Update head to the new first node
}
