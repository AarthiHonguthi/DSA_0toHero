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

// Function to search for an element
bool search(Node *head, int key)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
            return true;
        temp = temp->next;
    }
    return false;
}

int main()
{
    system("chcp 65001 > nul"); // This forces UTF-8 encoding.
    Node *head = new Node(2);
    head->next = new Node(4);
    head->next->next = new Node(6);
    head->next->next->next = new Node(8);

    int key = 6;
    if (search(head, key))
        cout << key << " found in Linked List!" << endl;
    else
        cout << key << " not found!" << endl;

    return 0;
}
