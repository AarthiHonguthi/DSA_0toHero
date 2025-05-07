// Check if Two Strings are Anagrams
#include <iostream>
#include <algorithm>
using namespace std;

bool areAnagrams(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}

int main()
{
    string s1 = "listen", s2 = "silent";
    cout << (areAnagrams(s1, s2) ? "Yes" : "No") << endl; // Output: Yes
    return 0;
}
