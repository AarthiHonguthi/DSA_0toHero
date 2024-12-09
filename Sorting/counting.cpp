#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void countingSort(vector<int> &arr)
{
    int maxVal = *max_element(arr.begin(), arr.end());
    vector<int> count(maxVal + 1, 0), output(arr.size());

    for (int x : arr)
        count[x]++;
    for (int i = 1; i <= maxVal; i++)
        count[i] += count[i - 1];
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    arr = output;
}
