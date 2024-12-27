/*A peak element is an element that is strictly greater than its neighbors.

Given a 0-indexed integer array nums, find a peak element, and return its index. 
If the array contains multiple peaks, return the index to any of the peaks.
You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered 
to be strictly greater than a neighbor that is outside the array.
You must write an algorithm that runs in O(log n) time.



Example 1:

Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.
*/

#include <stdio.h>
#include <vector>
using namespace std;

int findPeakElement(vector<int> &nums)
{
    int low = 0, high = nums.size() - 1;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] > nums[mid + 1])
        {
            // If the middle element is greater than the next, the peak is on the left
            high = mid;
        }
        else
        {
            // Otherwise, the peak is on the right
            low = mid + 1;
        }
    }
    return low; // low and high will converge to the peak index
}
