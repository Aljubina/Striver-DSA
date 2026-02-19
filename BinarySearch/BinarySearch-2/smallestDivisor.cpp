// TIME COMPLEXITY : O(N)2

#include <bits/stdc++.h>
using namespace std;

int SmallestDivisor(vector<int> arr, int limit) {
    int maxi = *max_element(arr.begin(), arr.end());

    for(int i =  1; i < maxi; i++) {
        int sum = 0;
        for(int j = 0; j < arr.size(); j++) {
            sum += ceil((double)(arr[j])/(double)(i));
            if(sum > limit) break;
        }
        if(sum <= limit) return i;
    }
    return -1;
}

int main() {
    vector<int> arr = {8,4,2,3};
    int limit = 10;

    int ans = SmallestDivisor(arr, limit);

    cout << "The minimum divisor is: " << ans << "\n";

    return 0;
}