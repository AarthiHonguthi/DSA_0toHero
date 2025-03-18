class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int val)
    {
        data = val;
        prev = next = nullptr;
    }
};

class DoublyLinkedList
{
public:
    Node *head;
    DoublyLinkedList() { head = nullptr; }

    // Insert at Head
    void insertAtHead(int val)
    {
        Node *newNode = new Node(val);
        newNode->prev = nullptr;
        newNode->next = head;
        if (head)
            head->prev = newNode;
        head = newNode;
    }

    // Insert at Tail
    void insertAtTail(int val)
    {
        Node *newNode = new Node(val);
        if (!head)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }

    // Insert at a Specific Position
    void insertAtIndex(int index, int val)
    {
        if (index == 0)
        {
            insertAtHead(val);
            return;
        }
        Node *newNode = new Node(val);
        Node *temp = head;
        int cnt = 0;
        while (cnt < index - 1 && temp)
        {
            temp = temp->next;
            cnt++;
        }
        if (!temp)
            return; // Invalid index
        newNode->next = temp->next;
        newNode->prev = temp;
        if (temp->next)
            temp->next->prev = newNode;
        temp->next = newNode;
    }

    // Delete Head Node
    void deleteHead()
    {
        if (!head)
            return;
        Node *temp = head;
        head = head->next;
        if (head)
            head->prev = nullptr;
        delete temp;
    }

    // Delete Tail Node
    void deleteTail()
    {
        if (!head)
            return;
        Node *temp = head;
        while (temp->next)
            temp = temp->next;
        if (temp->prev)
            temp->prev->next = nullptr;
        else
            head = nullptr;
        delete temp;
    }

    // Delete at Specific Position
    void deleteAtIndex(int index)
    {
        if (!head)
            return;
        if (index == 0)
        {
            deleteHead();
            return;
        }
        Node *temp = head;
        int cnt = 0;
        while (cnt < index && temp)
        {
            temp = temp->next;
            cnt++;
        }
        if (!temp)
            return;
        if (temp->prev)
            temp->prev->next = temp->next;
        if (temp->next)
            temp->next->prev = temp->prev;
        delete temp;
    }

    // Reverse DLL
    void reverse()
    {
        Node *temp = nullptr;
        Node *curr = head;
        while (curr)
        {
            temp = curr->prev;
            curr->prev = curr->next;
            curr->next = temp;
            curr = curr->prev;
        }
        if (temp)
            head = temp->prev;
    }
};
