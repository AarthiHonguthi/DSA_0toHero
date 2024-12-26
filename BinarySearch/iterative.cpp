#include <iostream>
using namespace std;

int binarySearchIterative(int arr[], int n, int target)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2; // To avoid overflow

        if (arr[mid] == target)
        {
            return mid; // Target found
        }
        else if (arr[mid] < target)
        {
            low = mid + 1; // Search in the right half
        }
        else
        {
            high = mid - 1; // Search in the left half
        }
    }
    return -1; // Target not found
}
