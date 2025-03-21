#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int findFloor(vector<int> &nums, int x)
{
    int low = 0, high = nums.size() - 1;
    int floorValue = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == x)
            return nums[mid];
        if (nums[mid] < x)
        {
            floorValue = nums[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return floorValue;
}
