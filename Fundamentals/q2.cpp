#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial_recursive(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial_recursive(n - 1);
    }
}

// Iterative function to calculate factorial
int factorial_iterative(int n)
{
    int result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    //  Output using recursive factorial
    cout << "Factorial of " << n << " (recursive) is: " << factorial_recursive(n) << endl;

    //  Output using iterative factorial
    cout << "Factorial of " << n << " (iterative) is: " << factorial_iterative(n) << endl;

    return 0;
}
