// TIME COMPLEXITY : O(2logN)

#include <bits/stdc++.h>
using namespace std;

int FirstOccurance(vector<int>& arr, int x, int n) {
    int left = 0, right = n-1;
    int first = -1;

    while(left <= right) {
        int mid = (left + right)/2;

        if(arr[mid] == x) {
            first = mid;
            right = mid - 1;
        } else if(arr[mid] > x) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return first;
}

int LastOccurance(vector<int>& arr, int x, int n) {
    int left = 0, right = n-1;
    int last = -1;


    while(left <= right) {
        int mid = (left + right)/2;

        if(arr[mid] == x) {
            last = mid;
            left = mid + 1;
        } else if(arr[mid] > x) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }


    return last;
}

int main() {

    vector<int> arr =  {1, 1, 2, 2, 2, 2, 2, 3, 4, 6, 8, 8, 8, 11, 13};
    int n = arr.size(), x = 2;
    int First = FirstOccurance(arr, x, n);
    int Last = LastOccurance(arr, x, n);
    cout << "The number of occurrences is: "
         << (Last - First) + 1 << "\n";

    return 0;
}