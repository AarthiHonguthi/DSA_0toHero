#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

string reverseWords(string s)
{
    vector<string> words;
    string word;
    stringstream ss(s); // Used to split the string by spaces

    // Extract words and store in vector
    while (ss >> word)
    {
        words.push_back(word);
        cout << "Extracted word: " << word << endl;
    }

    // Check the words vector
    cout << "Words before reversing: ";
    for (string w : words)
        cout << w << " ";
    cout << endl;

    // Reverse the order of words
    reverse(words.begin(), words.end());

    // Check the words vector after reversing
    cout << "Words after reversing: ";
    for (string w : words)
        cout << w << " ";
    cout << endl;

    // Join the reversed words with a single space
    string result;
    for (int i = 0; i < words.size(); i++)
    {
        result += words[i];
        if (i != words.size() - 1)
            result += " "; // Add space between words
    }

    cout << "Final result after joining: " << result << endl;
    return result;
}

int main()
{
    string s = "  hello   world  ";
    cout << "Input string: \"" << s << "\"" << endl;
    cout << "Reversed words: \"" << reverseWords(s) << "\"" << endl;
    return 0;
}
