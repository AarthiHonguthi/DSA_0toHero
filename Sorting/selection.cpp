#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void selectionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        swap(arr[i], arr[minIdx]);
    }
}
