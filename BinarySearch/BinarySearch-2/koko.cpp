// TIME COMPLEXITY -> O(n2)

#include <bits/stdc++.h>
using namespace std;

int minEatingSpeed(vector<int> a, int h) {

    // max value 
    int MaxV = *max_element(a.begin(), a.end());
    for(int i = 1; i < MaxV; i++) {
        int sum = 0;
        for(int j = 0; j < a.size(); j++) {
            int hoursForPile =(a[j] + i - 1) / i;
            sum += hoursForPile;

            if(sum > h) {
                break;
            }
        }
        if(sum <= h) {
            return i;
        }
    }
    return MaxV;
}

int main() {
    // Input array
    vector<int> a = {25, 12, 8, 14, 19};
    // Hours allowed
    int h = 5;

    cout << minEatingSpeed(a, h);
    return 0;
}