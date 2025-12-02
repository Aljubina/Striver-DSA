#include <bits/stdc++.h>
using namespace std;

int CountSubArrXor(vector<int>& arr , int k) {
    int n = arr.size();
    int cnt = 0;
    
    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = i ; j < n; j++)
        {
            sum = sum ^ arr[j];
            if(sum == k) cnt++;
        }
    }
    return cnt++;
}

int main() {
    
    vector<int> a = {5, 6, 7, 8, 9};
    int k = 5;
    int ans = CountSubArrXor(a, k);
    cout << "The number of subarrays with XOR k is: "
         << ans << "\n";
    return 0;
    return 0;
}