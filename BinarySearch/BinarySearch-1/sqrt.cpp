// TIE COMPLEXITY : O(N)

#include <bits/stdc++.h>
using namespace std;

int findSqrt(int n) {

    int ans = 0;
    for(int i = 1; i < n; i++) {
        if(i*i <= n) {
            ans = i;
        } else {
            break;
        }
    }
    return ans;
}

int main() {

    cout << findSqrt(10);
    return 0;
}