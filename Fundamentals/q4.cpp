//MaxMin
#include <iostream>
#include <vector>
using namespace std;

pair<int, int> findMaxMin(const vector<int> &arr)
{
    if (arr.empty())
        return {INT_MIN, INT_MAX}; //  Handle edge case: empty array

    int maxVal = arr[0];
    int minVal = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > maxVal)
            maxVal = arr[i];
        if (arr[i] < minVal)
            minVal = arr[i];
    }

    return {maxVal, minVal};
}

int main()
{
    vector<int> arr = {3, 1, 9, -2, 5, 0};

    pair<int, int> result = findMaxMin(arr);
    cout << "Maximum: " << result.first << endl;
    cout << "Minimum: " << result.second << endl;

    return 0;
}
