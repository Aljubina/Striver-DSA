//O(N)

#include <bits/stdc++.h>
using namespace std;

int Floor(vector<int> arr,int n , int x) {
    int floor = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] <= x) {
            floor = arr[i];
        } else {
            break;
        }
    }
    return floor;
}

int Ceil(vector<int> arr,int n , int x) {
    int ceil = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] >= x) {
            ceil = arr[i];
            break;
        }
    }
    return ceil;
}

int main() {

    vector<int> arr = {3, 4, 4, 7, 8, 10};
    int x = 2;
    int n = arr.size();

    cout<< "Floor: "<<Floor(arr,n, x) 
        <<" Ceil: "<<Ceil(arr,n, x);

    return 0;
}