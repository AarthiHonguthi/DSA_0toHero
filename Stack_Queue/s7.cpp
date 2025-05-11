#include <iostream>
#include <stack>
using namespace std;

int factorial(int n)
{
    stack<int> st;
    for (int i = n; i > 1; i--)
    {
        st.push(i);
    }

    int result = 1;
    while (!st.empty())
    {
        result *= st.top();
        st.pop();
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    cout << "Factorial is: " << factorial(n) << endl;
}
