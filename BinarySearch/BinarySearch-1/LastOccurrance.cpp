// Time Complexity : O (logN)

#include <bits/stdc++.h>
using namespace std;

int LastOccurrance(vector<int> arr, int target, int n) {
    int left = 0, right = n -1;
    int ans = -1;

    while(left <= right) {
        int mid = (left + right)/2;
        if(arr[mid] == target) {
            ans = mid;
            left = mid + 1;
        } else if(arr[mid] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n = 7;
    int key = 60;
  // define sorted array
    vector<int> v = {3, 4, 13, 13, 13, 20, 40};
  // print last occurrence index (or -1)
    cout << LastOccurrance(v, key, n) << "\n";
  // exit
    return 0;
}