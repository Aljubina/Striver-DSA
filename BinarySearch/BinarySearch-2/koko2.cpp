// TIME COMPLEXITY -> O(n2)

#include <bits/stdc++.h>
using namespace std;

int calculateHourly(vector<int>& a, int hourly) {
    int totalhr = 0
    for(int pile : a) {
        totalhr += (pile + hourly - 1) / hourly;
    }
    return totalhr;
}


int minEatingSpeed(vector<int> a, int h) {
    // max value 
    int MaxV = *max_element(a.begin(), a.end());
    for(int i = 1; i < MaxV; i++) {
        
        int hours = calculateHourly(a,i);
        if(sum <= hours) {
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