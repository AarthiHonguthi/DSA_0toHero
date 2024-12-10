/*Given N strings and Q queries.
In each query you are given a string to print frequency of that string*/ 

#include <iostream>
#include <unordered_map>
#include <string>
    using namespace std;

int main()
{
    int N, Q;
    cout << "Enter the number of strings: ";
    cin >> N;

    unordered_map<string, int> freqMap; // Map to store frequencies

    cout << "Enter the strings:\n";
    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        freqMap[str]++; // Increment the frequency of the string
    }

    cout << "Enter the number of queries: ";
    cin >> Q;

    cout << "Enter the queries:\n";
    for (int i = 0; i < Q; i++)
    {
        string query;
        cin >> query;
        if (freqMap.find(query) != freqMap.end())
        {
            cout << query << ": " << freqMap[query] << endl;
        }
        else
        {
            cout << query << ": 0\n"; // If the string is not found
        }
    }

    return 0;
}

/* Why Not std::multimap ? 
std::multimap allows duplicate keys, but it doesn't directly support frequency counting. 
To count frequencies with a multimap, you’d need to iterate through the range of keys returned by equal_range, 
which is less efficient than using an unordered_map. */
