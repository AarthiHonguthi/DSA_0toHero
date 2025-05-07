//Return Max Occurring String

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

char getMaxOccurringChar(string str)
{
    int count[256] = {0}; // Array to store frequency of characters

    // Count frequency of each character
    for (char ch : str)
    {
        count[ch]++;
    }

    // Find the character with the maximum frequency
    int maxCount = 0;
    char maxChar;
    for (int i = 0; i < 256; i++)
    {
        if (count[i] > maxCount)
        {
            maxCount = count[i];
            maxChar = (char)i; // Convert index to character
        }
    }

    return maxChar;
}

int main()
{
    string str = "teststring";
    cout << "Max occurring character: " << getMaxOccurringChar(str) << endl;
    return 0;
}

/*
#include <iostream>
#include <unordered_map>
using namespace std;

char maxOccurringChar(string s) {
    unordered_map<char, int> freq;  // Hashmap to store character frequencies

    // Count frequencies
    for (char ch : s) {
        freq[ch]++;
    }

    // Find max occurring character
    char maxChar = '\0';
    int maxCount = 0;

    for (auto it : freq) {
        if (it.second > maxCount) {
            maxCount = it.second;
            maxChar = it.first;
        }
    }

    return maxChar;
}

int main() {
    string s = "abcbdaaa";
    cout << "Max Occurring Character: " << maxOccurringChar(s) << endl;
    return 0;
}

*/
