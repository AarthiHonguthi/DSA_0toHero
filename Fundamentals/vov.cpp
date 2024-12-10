#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n; // input number of vectors

    vector<vector<int>> v; // vector of vectors

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;         // size of the i-th vector
        vector<int> temp; // temporary vector
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;          // element to add
            temp.push_back(x); // add element to the temporary vector
        }
        v.push_back(temp); // add the vector to the vector of vectors
    }

    // Output all vectors
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
/*YES! YOU CAN DO THIS!!*/