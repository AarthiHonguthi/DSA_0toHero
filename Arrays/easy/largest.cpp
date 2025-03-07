// #include <iostream>
// #include <algorithm>
// using namespace std;

// int findLargestElement(int arr[], int n)
// {
//     sort(arr, arr + n); // Sort the array

//     return arr[n - 1]; // Last element after sorting is the largest
// }

// int main()
// {
//     int arr[] = {10, 25, 5, 18, 99, 45};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Largest element: " << findLargestElement(arr, n) << endl;
//     return 0;
// } not optimal O(nlogn)

#include <iostream>
using namespace std;

int findLargestElement(int arr[], int n)
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

    cout << "Largest element: " << findLargestElement(arr, n) << endl;
    return 0;
}
//O(n)