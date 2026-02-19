// TIME COMPLEXITY : O(N)2

#include <bits/stdc++.h>
using namespace std;

int SmallestDivisor(vector<int> arr, int limit) {
    int low = 1;
    int high = *max_element(arr.begin(), arr.end());

    int ans = -1;
    while(low <= high) {
        int mid = low + (high - low)/2;
        int sum = 0;
        for(int j = 0; j < arr.size(); j++) {
            sum += ceil((double)(arr[j])/(double)(mid));
            if(sum > limit) {
                low = mid + 1;
                break;
            };
        }
        if(sum <= limit){
            ans = mid;
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    int limit = 8;

    int ans = SmallestDivisor(arr, limit);

    cout << "The minimum divisor is: " << ans << "\n";

    return 0;
}