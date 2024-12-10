#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    int N;
    cout << "Enter the number of strings: ";
    cin >> N;

    map<string, int> freqMap; // Map to store strings and their frequencies

    cout << "Enter the strings:\n";
    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        freqMap[str]++; // Increment the frequency of the string
    }

    cout << "\nUnique strings in lexicographical order with frequencies:\n";
    for (const auto &pair : freqMap)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}

// This approach has a time complexity of O(N log N) because :

//     Each insertion into the map takes O(log N)
//         .Iterating over the map to print the results takes O(N)
        
