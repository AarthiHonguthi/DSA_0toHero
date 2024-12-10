/*Code Explanation:
Read the N strings and store them in a set or unordered_set (to maintain unique elements and allow fast lookup).
Process Q queries to check if the queried string is present in the set.
Print yes if the string is present, otherwise print no.
*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
    int N, Q;
    cin >> N; // Number of strings

    set<string> s; // Using set for unique and sorted storage

    // Input N strings
    for (int i = 0; i < N; ++i)
    {
        string str;
        cin >> str;
        s.insert(str);
    }

    cin >> Q; // Number of queries

    // Process each query
    for (int i = 0; i < Q; ++i)
    {
        string query;
        cin >> query;

        // Check if query string exists in the set
        if (s.find(query) != s.end())
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

    return 0;
}
