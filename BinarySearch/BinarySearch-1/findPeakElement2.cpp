// Time Complexity : O(logN)

#include <bits/stdc++.h>
using namespace std;

// Observation : Left half is incresing till Peak element and Right half is decreasing from peak element . 

int findPeakElement(vector<int> arr) {
    int n = arr.size();

    int left = 0, right = n - 1;
    while(left < right) {
        int mid = (left + right)/2;

        // if arr[mid] > arr[mid + 1] means update right to check in left half
        if(arr[mid] > arr[mid+1]) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return left;
}

int main() {
    vector<int> nums = {1,2,3,4,5,6,7,8,5,1};
    int index = findPeakElement(nums);
    cout << "Peak at index: " << index << " with value: " << nums[index] << endl;
    return 0;
    return 0;
}