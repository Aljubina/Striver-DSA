#include <bits/stdc++.h>
using namespace std;

int SearchInsert(vector<int> arr, int n , int x) {
    int left = 0, right = n- 1;
    int ans = n;

    while(left <= right) {
        int mid = (left + right)/2;
        if(arr[mid] > x) {
            ans = mid;
            right = mid-1;
        } else {
            left = mid+1;
        }
    }
    return ans;
}
int main() {

    vector<int> arr = {1, 2, 4, 7,8,10};
    int x = 3;
    int n = arr.size();
    int SearchPosition = SearchInsert(arr,n,x);
    cout << "Position to Insert "<<x<<" is: "<<SearchPosition<<endl;
    return 0;
}