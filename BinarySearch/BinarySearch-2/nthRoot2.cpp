// Time complexity : O(logm)

#include <bits/stdc++.h>
using namespace std;

int nthRoot(int n , int m) {

    //lowest possible ans can be 1 and highest one can be m
    int low = 1, high = m;
    while(low <= high) {
        int mid = (low + high)/2;

        // store power in ans
        long long ans = 1;
        for(int i = 0; i < n; i++) {
            ans*= mid;
            // if ans gets greater than m then break from loop
            if(ans > m) break;
        }
        // ans is equal to m then return m
        if(ans == m) return mid;
        // ans is greater than m then eliminate the right half
        else if (ans > m) high = mid - 1;
        // ans is less than m then elimimate left half
        else low = mid + 1;
    }

    return -1;
}

int main() {

    int n = 3, m = 8;

    // Find nth root
    cout << "Nth Root: " << nthRoot(n, m) << endl;
    return 0;
}