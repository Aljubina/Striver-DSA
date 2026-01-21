#include <bits/stdc++.h>
using namespace std;

int UpperBoundBinary(vector<int> arr, int n, int x)
{
    int left = 0, right = n-1;
    int ans = n;

    while(left <= right) {
        int mid = (left + right)/2;
        if(arr[mid] > x) {
            ans = mid;
            right = mid-1;
        } else {
            left = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {3, 5, 8, 15, 19}; 
    int n = arr.size();                  
    int x = 19; 
    
    int UB = UpperBoundBinary(arr, n, x);
    cout << "Upper Bound is: "<<UB<<endl;
    return 0;
}