#include <iostream>
#include <string> // Required for std::string and getline
#include <cctype> // Required for isalnum and tolower

using namespace std;

bool isPalindrome(string s)
{
    int left = 0, right = s.length() - 1;

    while (left < right)
    {
        if (!isalnum(s[left]))
            left++;
        else if (!isalnum(s[right]))
            right--;
        else if (tolower(s[left]) != tolower(s[right]))
            return false;
        else
        {
            left++;
            right--;
        }
    }

    return true;
}

int main()
{
    string s;
    cout << "Enter a string: ";
    cin.ignore();    
    getline(cin, s); // Reads the entire line, including spaces

    cout << (isPalindrome(s) ? "Palindrome" : "Not a palindrome") << endl;

    return 0;
}
