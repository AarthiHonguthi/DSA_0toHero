#include <iostream>
using namespace std;

class CustomQueue
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    CustomQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int val)
    {
        if (rear == size - 1)
        {
            cout << "Queue OverFlow" << endl;
            return;
        }
        if (front == -1)
            front++;
        arr[++rear] = val;
    }

    void pop()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue UnderFlow" << endl;
            return;
        }
        front++;
    }

    int getFront()
    {
        if (front == -1 || front > rear)
        {
            cout << "No element in the Queue" << endl;
            return -1;
        }
        return arr[front];
    }

    int getRear()
    {
        if (rear == -1)
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        return arr[rear];
    }

    bool isEmpty()
    {
        return front == -1 || front > rear;
    }

    int getSize()
    {
        return isEmpty() ? 0 : (rear - front + 1);
    }

    void print()
    {
        cout << "Printing Queue: ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~CustomQueue()
    {
        delete[] arr;
    }
};

int main()
{
    CustomQueue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.print(); // 10 20 30
    q.pop();
    q.print(); // 20 30
    q.push(40);
    q.push(50);
    q.push(60);
    q.print();                                 // 20 30 40 50 60
    cout << "Front: " << q.getFront() << endl; // 20
    cout << "Rear: " << q.getRear() << endl;   // 60
    return 0;
}
