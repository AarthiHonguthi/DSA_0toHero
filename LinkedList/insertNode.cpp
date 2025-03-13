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

// Insert at the beginning
void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

// Insert at the end
void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (!head)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

// Insert at a specific position (1-based index)
void insertAtPosition(Node *&head, int val, int pos)
{
    if (pos == 1)
    {
        insertAtHead(head, val);
        return;
    }
    Node *temp = head;
    for (int i = 1; temp != NULL && i < pos - 1; i++)
        temp = temp->next;

    if (!temp)
        return;

    Node *newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
}

// Traversal function
void traverse(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " → ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    system("chcp 65001 > nul"); // This forces UTF-8 encoding.

    Node *head = new Node(2);
    head->next = new Node(4);
    head->next->next = new Node(6);
    head->next->next->next = new Node(8);

    insertAtHead(head, 1);
    insertAtTail(head, 10);
    insertAtPosition(head, 5, 4);

    traverse(head);
    return 0;
}
