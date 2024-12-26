// Fibonacci
#include <iostream>
using namespace std;

int fibonacciRecursive(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

void fibonacciIterative(int n)
{
    if (n == 0)
    {
        cout << "0";
        return;
    }
    if (n == 1)
    {
        cout << "0 1";
        return;
    }

    int a = 0, b = 1;
    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++)
    {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of terms for Fibonacci: ";
    cin >> n;

    cout << "Fibonacci Sequence (Iterative): ";
    fibonacciIterative(n);

    cout << "\nFibonacci nth term (Recursive): " << fibonacciRecursive(n - 1) << endl;

    return 0;
}
