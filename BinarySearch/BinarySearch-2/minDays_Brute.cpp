// Time Complexity : O(mini-maxi)*
#include <bits/stdc++.h>
using namespace std;

bool Possible(vector<int> arr, int days, int m, int k) {
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

int minDays(vector<int> arr, int m, int k) {
    int totalFlowers = m*k;

    if(arr.size() < totalFlowers) return -1;
    int mini = *min_element(arr.begin(), arr.end());
    int maxi = *max_element(arr.begin(), arr.end());

    for(int i = mini; i <= maxi; i++) {
        if(Possible(arr, i, m, k) == true) {
            return i;
        } 
    } 
    return -1;
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