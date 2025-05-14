// CircularQueue
#include <iostream>
using namespace std;

class CircularQueue
{
    int *arr;
    int size;
    int front;
    int rear;

public:
    CircularQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int val)
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            cout << "Queue OverFlow" << endl;
            return;
        }
        if (front == -1)
            front = rear = 0;
        else if (rear == size - 1 && front != 0)
            rear = 0;
        else
            rear++;

        arr[rear] = val;
    }

    void pop()
    {
        if (front == -1)
        {
            cout << "Queue UnderFlow" << endl;
            return;
        }
        if (front == rear)
            front = rear = -1;
        else if (front == size - 1)
            front = 0;
        else
            front++;
    }

    void print()
    {
        if (front == -1)
        {
            cout << "Queue is Empty" << endl;
            return;
        }
        cout << "Printing Queue: ";
        if (rear >= front)
        {
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
        }
        else
        {
            for (int i = front; i < size; i++)
                cout << arr[i] << " ";
            for (int i = 0; i <= rear; i++)
                cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~CircularQueue()
    {
        delete[] arr;
    }
};

int main()
{
    CircularQueue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.print(); // 10 20 30 40 50
    q.pop();
    q.pop();
    q.push(60);
    q.push(70);
    q.print(); // 30 40 50 60 70
    return 0;
}
