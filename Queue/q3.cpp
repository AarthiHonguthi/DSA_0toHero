//Dequeue
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;

    // Push operations
    dq.push_back(10);
    dq.push_front(20);
    dq.push_back(30);
    dq.push_front(40);

    // Print deque
    cout << "Deque elements: ";
    for (int x : dq)
        cout << x << " ";
    cout << endl;

    // Pop operations
    dq.pop_front();
    dq.pop_back();

    // Print deque after pops
    cout << "Deque after pops: ";
    for (int x : dq)
        cout << x << " ";
    cout << endl;

    // Front and back
    cout << "Front: " << dq.front() << endl;
    cout << "Back: " << dq.back() << endl;

    return 0;
}
