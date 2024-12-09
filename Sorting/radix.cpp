#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Counting Sort for a specific digit
void countingSort(vector<int> &arr, int exp)
{
    int n = arr.size();
    vector<int> output(n), count(10, 0);

    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

// Radix Sort
void radixSort(vector<int> &arr)
{
    int maxVal = *max_element(arr.begin(), arr.end());
    for (int exp = 1; maxVal / exp > 0; exp *= 10)
        countingSort(arr, exp);
}
