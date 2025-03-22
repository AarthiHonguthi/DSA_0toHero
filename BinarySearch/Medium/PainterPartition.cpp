#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // For accumulate()

using namespace std;

bool isPossible(vector<int> &arr, int n, int k, int mid)
{
    int painters = 1, timeSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (timeSum + arr[i] <= mid)
        {
            timeSum += arr[i]; // Assign board to current painter
        }
        else
        {
            painters++; // Need a new painter

            if (painters > k || arr[i] > mid)
            {
                return false; // More painters needed or board itself is too large
            }

            timeSum = arr[i]; // Start new painter with current board
        }
    }

    return true;
}

int minTimeToPaintBoards(vector<int> &arr, int n, int k)
{
    int low = *max_element(arr.begin(), arr.end());   // Min time = largest board
    int high = accumulate(arr.begin(), arr.end(), 0); // Max time = sum of all boards
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (isPossible(arr, n, k, mid))
        {
            ans = mid;      // Store valid answer
            high = mid - 1; // Try for smaller max time
        }
        else
        {
            low = mid + 1; // Increase time limit
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {5, 5, 5, 5};
    int k = 2; // Number of painters

    int result = minTimeToPaintBoards(arr, arr.size(), k);
    cout << "Minimum time to paint all boards: " << result << endl;

    return 0;
}
