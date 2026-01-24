#include <bits/stdc++.h>
using namespace std;

bool searchInARotatedSortedArrayII(vector<int>& arr, int target, int n) {
    int left = 0, right = n-1;

    while(left <= right) {
        int mid = (left + right)/2;

        //Check if arr[mid] is equal to target
        if(arr[mid] == target) {
            return true;
        }

        // Edge Case : all thre are equal, we cannot determine which side is sorted
        if(arr[left] == arr[mid] && arr[mid] == arr[right]) {
            left++;
            right--;
            continue;
        }

        // check if left part is sorted
        else if(arr[left] <= arr[mid]) {
            
            //check if target lies between left and mid
            if(arr[left] <= target && target <= arr[mid]) {
                right = mid-1;
            } else {
                left = mid + 1;
            }
        }
        
        // Check if right part is sorted
        else {

            //check if target lies between mid and right
            if(arr[mid] <= target && target <= arr[right]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }
    return false;
}

int main() {

    vector<int> arr = {3, 3, 3, 3, 3};
    int k = 3;
    int n = arr.size();
    bool ans = searchInARotatedSortedArrayII(arr, k, n);
    if (ans)
        cout << "Target is present in the array.\n";
    else
        cout << "Target is not present.\n";
    return 0;
}