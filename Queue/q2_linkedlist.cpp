class Node
{
public:
    int data;
    Node *next;
    Node(int data) : data(data), next(nullptr) {}
};

class QueueLL
{
    Node *front = nullptr, *rear = nullptr;

public:
    void push(int val)
    {
        Node *newNode = new Node(val);
        if (!rear)
            front = rear = newNode;
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
    }
    void pop()
    {
        if (!front)
            return;
        Node *temp = front;
        front = front->next;
        if (!front)
            rear = nullptr;
        delete temp;
    }
    int getFront() { return front ? front->data : -1; }
    bool isEmpty() { return !front; }
};
