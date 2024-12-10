//Array of Vectors
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n; // input size of array

    vector<int> arr[100]; // array of n vectors (assuming a maximum size of 100)

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m; // size of the i-th vector
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;            // element to add
            arr[i].push_back(x); // add element to the vector
        }
    }

    // Output all vectors
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
