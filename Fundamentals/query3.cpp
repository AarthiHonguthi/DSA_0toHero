/*Optimized Version Using unordered_set:
For faster lookups when order doesn’t matter, use unordered_set:
*/

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int N, Q;
    cin >> N;

    unordered_set<string> s; // Using unordered_set for faster lookup

    // Input N strings
    for (int i = 0; i < N; ++i)
    {
        string str;
        cin >> str;
        s.insert(str);
    }

    cin >> Q;

    // Process each query
    for (int i = 0; i < Q; ++i)
    {
        string query;
        cin >> query;

        // Check if query string exists in the unordered_set
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
/*| **Method**          | **Time Complexity (Lookup)** | **Space Complexity** | **Order Maintained?** |
  |---------------------|------------------------------|----------------------|-----------------------|
  | `std::set`          | O(log N)                     | O(N)                 | Yes                   |
  | `std::unordered_set`| O(1) (average)               | O(N)                 | No                    |
*/