#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> arr) {
    int n = arr.size();

    for(int i = 0 ; i < n; i++) {
        bool left = (i ==0 ) || arr[i] >= arr[i-1];
        bool right = (i == n-1) || arr[i] >= arr[i+1];

        if(left && right) return i;
    }
    return -1;
}

int main() {
    vector<int> nums = {1,2,3,4,5,6,7,8,5,1};
    int index = findPeakElement(nums);
    cout << "Peak at index: " << index << " with value: " << nums[index] << endl;
    return 0;
    return 0;
}