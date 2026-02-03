// TIE COMPLEXITY : O(logN)

#include <bits/stdc++.h>
using namespace std;

int findSqrt(int n) {
    // lowest possible ans can be 1 and highest can be n
    int low = 1, high = n;
    // stores nearest value to sqrt
    int ans = 0;

    while(low <= high) {

        int mid = low + (high - low) /2;

        // if mid * mid is less than n ... it means ans lie in right half so update low = mid + 1;
        if(mid * mid <= n) {
            ans = mid;
            low = mid + 1;
        }
        // if mid * mid is greater than n.... ans must lie in left half so eliminate right half. 
        else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {

    cout << findSqrt(60);
    return 0;
}