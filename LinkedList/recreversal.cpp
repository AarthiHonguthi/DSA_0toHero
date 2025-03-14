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

Node *reverseRecursive(Node *head)
{
    if (!head || !head->next)
        return head; // Base case

    Node *newHead = reverseRecursive(head->next); // Reverse rest
    head->next->next = head;                      // Make next node point to current
    head->next = NULL;                            // Set current node's next to NULL

    return newHead; // Return new head
}
