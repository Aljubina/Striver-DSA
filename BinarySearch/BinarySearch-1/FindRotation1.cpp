//Time Complexity : O(N)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the number of rotations in a rotated sorted array
    int findRotations(vector<int>& arr) {
        // Store size of array
        int n = arr.size();

        // Assume the first element is the smallest
        int minVal = arr[0];

        // Index of the smallest element
        int minIndex = 0;

        // Traverse the array
        for (int i = 1; i < n; i++) {
            // If current element is smaller than minVal, update
            if (arr[i] < minVal) {
                minVal = arr[i];
                minIndex = i;
            }
        }

        // The index of smallest element = number of rotations
        return minIndex;
    }
};

int main() {
    Solution obj;

    // Example input
    vector<int> arr = {4,5,6,7,0,1,2,3};

    // Call the function and store result
    int rotations = obj.findRotations(arr);

    // Print result
    cout << rotations << endl;
    return 0;
}
