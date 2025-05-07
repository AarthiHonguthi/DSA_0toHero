// 1. Reverse a String

#include <iostream>
using namespace std;

void reverseString(string &str)
{
    int left = 0; int right = str.length() -1;
    while (left < right) {
        swap(str[left], str[right]);
        left++; right--;
    }
}

int main()
{
    string str = "hello";
    reverseString(str);
    cout << str << endl; // Output: olleh
    return 0;
}
