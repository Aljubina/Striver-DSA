// Time Complexity : O(N*log(low - high)*N
#include <bits/stdc++.h>
using namespace std;
bool Possible(const vector<int>& arr, int days, int m, int k) {
    int cnt = 0, no_of_Bouquets = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] <= days) {
            cnt++;
        }
        else {
            no_of_Bouquets += (cnt/k);
            cnt = 0;
        }
    }
    no_of_Bouquets += (cnt/k);
    if(no_of_Bouquets >= m) return true;
    else return false;
}

int minDays(vector<int>& arr, int m, int k) {
    long long totalFlowers = 1LL * m*k;
    if(arr.size() < totalFlowers) return -1;
    int low = *min_element(arr.begin(), arr.end());
    int high = *max_element(arr.begin(), arr.end());
    
    int ans = -1;
    while(low <= high) {
        int mid = low + (high-low)/2;
        if(Possible(arr, mid, m, k) == true) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {

    vector<int> bloomDays = {7, 7, 7, 7, 13, 11, 12, 7};
    int k = 3;
    int m = 2;

    int result = minDays(bloomDays, m, k);

    if (result == -1)
        cout << "We cannot make " << m <<  " bouquets.\n";
    else
        cout << "We can make bouquets on day " << result << "\n";
    return 0;
}