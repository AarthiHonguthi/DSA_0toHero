#include <stdio.h>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
bool isPossible(vector<int> arr, int n, int m, int mid){
    int students = 1, pageSum = 0;
    for(int i=0; i<n; i++){
       if(pageSum +arr[i] <= mid){
        pageSum += arr[i];
       }
       else{
        students++;
        if(students > m || arr[i] > mid){
            return false;
        }
        pageSum = arr[i];
       }
    }
    return true;
}
 int allocateBooks(vector<int> arr, int n, int m){
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    int ans = -1;
    while(low <= high){
        int mid = high + (high - low) / 2;
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return ans;
 }