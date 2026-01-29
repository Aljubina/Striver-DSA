#include <bits/stdc++.h>
using namespace std;

// Function to find rotation count using one-pass scan
int findRotationCount(vector<int> &arr) {
    // Get the size of the array
    int n = arr.size();
    // Traverse the array till second-last element
    for (int i = 0; i < n - 1; i++) {
        // If current element is greater than the next, break point found
        if (arr[i] > arr[i + 1]) {
            // Rotation count is index of next element
            return i + 1;
        }
    }
    // If no break point found, array not rotated
    return 0;
}

int main() {
    // Example input
    vector<int> arr = {3, 4, 5, 1, 2};
    // Function call to get rotation count
    int rotations = findRotationCount(arr);
    // Output the result
    cout << rotations << endl;
    return 0;
}
