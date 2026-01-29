#include <bits/stdc++.h>
using namespace std;

int findRotations(vector<int> arr) {
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
    return left;
}

int main() {
    vector<int> arr = {3,4,5,6,7,1,2};
    int rotations = findRotations(arr);
    cout << rotations << endl;
    return 0;

}