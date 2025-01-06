// 2. Check if a String is a Palindrome
#include <iostream>
using namespace std;

bool isPalindrome(const string &str)
{
    int left = 0, right = str.length() - 1;
    while (left < right)
    {
        if (str[left] != str[right])
            return false;
        left++;
        right--;
    }
    return true;
}

int main()
{
    string str = "radar";
    cout << (isPalindrome(str) ? "Yes" : "No") << endl; // Output: Yes
    return 0;
}
