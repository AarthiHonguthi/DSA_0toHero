// Find the Frequency of Characters
#include <iostream>
using namespace std;

void printFrequency(const string &str)
{
    int freq[26] = {0}; // Assuming lowercase English letters
    for (char ch : str)
    {
        freq[ch - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            cout << char('a' + i) << ": " << freq[i] << endl;
        }
    }
}

int main()
{
    string str = "apple";
    printFrequency(str);
    return 0;
}
