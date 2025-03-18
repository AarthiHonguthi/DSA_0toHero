#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

// Function to detect cycle
bool hasCycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true; // Cycle detected
    }
    return false; // No cycle
}

// Function to insert a node at the end
void insert(Node *&head, int data)
{
    if (!head)
    {
        head = new Node(data);
        return;
    }
    Node *temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = new Node(data);
}

// Create a cycle for testing
void createCycle(Node *head, int pos)
{
    if (pos == -1)
        return;
    Node *temp = head;
    Node *cycleNode = nullptr;
    int count = 1;
    while (temp->next)
    {
        if (count == pos)
            cycleNode = temp;
        temp = temp->next;
        count++;
    }
    temp->next = cycleNode;
}

int main()
{
    Node *head = nullptr;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);

    createCycle(head, 3); // Creating a cycle at position 3

    if (hasCycle(head))
        cout << "Cycle Detected!" << endl;
    else
        cout << "No Cycle Detected." << endl;

    return 0;
}
