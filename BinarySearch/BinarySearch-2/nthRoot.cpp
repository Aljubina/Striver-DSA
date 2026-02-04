// Time Complexity : O(n)2

#include <bits/stdc++.h>
using namespace std;

int nthRoot(int n , int m) {
    
    // loop till M possible answer
    for(int i = 1; i < m; i++) {
        // store nth root by multiply n times  
        int ans = i;
        // to multiply till n 
        for(int j = 1; j < n; j++) {
            ans = ans * i;
        }

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