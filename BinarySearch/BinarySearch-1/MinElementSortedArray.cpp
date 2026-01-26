#include <bits/stdc++.h>
using namespace std;

int MinElement(vector<int>& arr) {
    int n = arr.size();
    int left = 0, right = n-1;

    while(left < right) {
        int mid = (left + right)/2;

        if(arr[mid] > arr[right]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return arr[left];
}

int main() {

    // Input array
    vector<int> arr = {3,4,5,1,2};

    // Call function and store result
    int result = MinElement(arr);

    // Output the result
    cout << "Minimum element is " << result << endl;
    return 0;
}