// Sum of Natural Numbers

#include <iostream>

using namespace std;
int sumOfNaturalNumbers(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sumOfNaturalNumbers(n - 1);
    }
}

// Another Solution:
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Calculate sum using the formula for the sum of first n natural numbers
    int sum = n * (n + 1) / 2;

    cout << "Sum of the first " << n << " natural numbers is: " << sum << endl;

    return 0;
}