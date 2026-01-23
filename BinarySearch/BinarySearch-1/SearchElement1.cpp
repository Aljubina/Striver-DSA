#include <bits/stdc++.h>
using namespace std;

int SearchElement(vector<int> arr, int target, int n) {
    int left = 0, right = n-1;

    while(left <= right) {
        int mid = (left+right)/2;

        if(arr[mid] == target) {
            return mid;
        }

        // Left Part Sorted
        else if(arr[left] <= arr[mid] ) {
            //Check if target lies between left and mid .. if then move to left part by updating right
            if(arr[left] <= target && target <= arr[mid]) {
                right = mid - 1;
            }
            //if target does not lie between  left and mid .... move to right part by updating left 
            else {
                left = mid + 1;
            }
        }

        // Right Part Sorted 
        else {
            //check if target lies between mid and right .. if then move to right part by updating left 
            if(arr[mid] <= target && target <= arr[right]) {
                left = mid + 1;
            } 
            //if target doesnt lie between mid and right... move to left part by updating right
            else {
                right = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 3;
    int n = nums.size();

    int result = SearchElement(nums, target, n);
    cout<<result;

    return 0;
}