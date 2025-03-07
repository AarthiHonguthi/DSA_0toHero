#include <iostream>
using namespace std;

int findSecondLargestElement(int arr[], int n)
{
    int maxElement = arr[0]; // Assume first element is the largest

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }

    return maxElement;
}

int main()
{
    int arr[] = {10, 25, 5, 18, 99, 45};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Largest element: " << findSecondLargestElement(arr, n) << endl;
    return 0;
}
