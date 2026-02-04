// Time complexity : O(n)

#include <bits/stdc++.h>
using namespace std;

int nthRoot(int n , int m) {
    
    // loop till M possible answer
    for(int i = 1; i <= m; i++) {
        // compute i^n using built in function
        long long ans = pow(i, n);

        //check if ans is equal to M if equal v got out nth root
        if( ans == m) {
            return i;
        }

        // if ans exceeds it means no nth root for m 
        if( ans > m) {
            break;
        }
    }
    return -1;
}

int main() {

    int n = 3, m = 2744;

    // Find nth root
    cout << "Nth Root: " << nthRoot(n, m) << endl;
    return 0;
}