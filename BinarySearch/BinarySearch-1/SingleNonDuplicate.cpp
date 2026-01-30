// Time complexity : O(log N)

#include <bits/stdc++.h>
using namespace std;

int SingleNonDuplicate(vector<int> arr) {
    int n = arr.size();
        
    // EDGE CASES :
    // Only one element
    if(n == 1) return arr[0];
    //first element is unique
    if(arr[0] != arr[1]) return arr[0];
    //last elemt is unique
    if(arr[n-1] != arr[n-2]) return arr[n-1];

    int left = 1, right = n-2;
    while(left <= right) {
        int mid = (left + right)/2;

        //middle element is unique is previous and next of mid is not equal
        if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]) {
            return arr[mid];
        }

        // if mid is in left half -> if mid is on odd index and previous element is equal to mid our single element lies in right half
        // or if mid is on even index check if next element is equal to mid 
        else if((mid % 2 == 1 && arr[mid] == arr[mid-1]) ||
                (mid % 2 == 0  && arr[mid] == arr[mid+1])) {
            left = mid + 1;
        } 
        else {
            right = mid - 1;
        }
    } 
    return -1;
}

int main() {
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    
    int ans = SingleNonDuplicate(arr);

    // Print the result
    cout << "The single element is: " << ans << "\n";
}