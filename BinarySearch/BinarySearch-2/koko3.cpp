// Time Complexity : O(Nlog(maxV))  

#include <bits/stdc++.h>
using namespace std;

int calulate(vector<int> a, int mid) {
    int sum = 0;
    for(int i = 0; i < a.size(); i++) {
        sum += (a[i] + mid - 1)/mid;
    }
    return sum;
}

int minEatingSpeed(vector<int> a, int h) {
    int maxV = *max_element(a.begin(), a.end());

    int left = 0, right = maxV;
    int ans = maxV;
    while(left <= right) {
        int mid = (left + right)/2;

        int totalHours = calulate(a, mid);

        if(totalHours <= h) {
            ans = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return ans;
}

int main() {

    vector<int> piles = {7, 15, 6, 3};
    int h = 8;

    cout << minEatingSpeed(piles, h);
    return 0;
}