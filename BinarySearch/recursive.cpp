int binarySearchRecursive(int arr[], int low, int high, int target)
{
    if (low > high)
    {
        return -1; // Base case: target not found
    }

    int mid = low + (high - low) / 2; // To avoid overflow

    if (arr[mid] == target)
    {
        return mid; // Target found
    }
    else if (arr[mid] < target)
    {
        return binarySearchRecursive(arr, mid + 1, high, target); // Search in the right half
    }
    else
    {
        return binarySearchRecursive(arr, low, mid - 1, target); // Search in the left half
    }
}