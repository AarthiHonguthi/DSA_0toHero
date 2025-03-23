#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(vector<int> &stalls, int n, int k, int mid)
{
    int cowsPlaced = 1, lastCow = stalls[0]; // Place the first cow at the first stall

    for (int i = 1; i < n; i++)
    {
        if (stalls[i] - lastCow >= mid)
        { // Check if we can place the next cow
            cowsPlaced++;
            lastCow = stalls[i]; // Update last placed cow position

            if (cowsPlaced == k)
                return true; // All cows placed successfully
        }
    }

    return false; // Not enough cows placed
}

int aggressiveCows(vector<int> &stalls, int n, int k)
{
    sort(stalls.begin(), stalls.end()); // Sorting stalls positions

    int low = 1, high = stalls[n - 1] - stalls[0], ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (isPossible(stalls, n, k, mid))
        {
            ans = mid;     // Store the largest minimum distance found
            low = mid + 1; // Try placing cows further apart
        }
        else
        {
            high = mid - 1; // Reduce distance
        }
    }

    return ans;
}

int main()
{
    vector<int> stalls = {1, 2, 8, 4, 9};
    int k = 3; // Number of cows

    int result = aggressiveCows(stalls, stalls.size(), k);
    cout << "Largest minimum distance between cows: " << result << endl;

    return 0;
}
