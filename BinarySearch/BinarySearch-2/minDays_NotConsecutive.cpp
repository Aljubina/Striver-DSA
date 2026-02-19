// Time Complexity : O(N)2
#include <bits/stdc++.h>
using namespace std;

int minDaysToMakeBouquets(vector<int> arr, int m, int k) {
    int totalRoses = m*k;
    int cnt = 0;
    int maxV = *max_element(arr.begin(), arr.end());

    for(int i = 1; i <= maxV; i++) {
        for(int j = 0; j < arr.size(); j++) {
            if(arr[j] == i) {
                cnt++;
            }
            if(cnt == totalRoses) {
                return i;
            }
        }
    }
    return -1;
}

int main() {

    vector<int> bloomDays = {1, 10, 3, 10, 2};
    int k = 2;
    int m = 3;

    int result = minDaysToMakeBouquets(bloomDays, m, k);

    if (result == -1)
        cout << "We cannot make " << m <<  " bouquets.\n";
    else
        cout << "We can make bouquets on day " << result << "\n";
    return 0;
}