// O(logN)

#include <bits/stdc++.h>
using namespace std;

int Floor(vector<int> arr,int n , int x) {
    int left = 0, right = n-1;
    int floor = -1;

    while(left <= right) {
        int mid = (left + right)/2;
        if(arr[mid] <= x) {
            floor = arr[mid];
            left = mid + 1;
            
        }
        else {
            right = mid -1;
        }
    }
    
    return floor;
}

int Ceil(vector<int> arr,int n , int x) {
    int left = 0, right = n-1;
    int ceil = -1;


    while(left <= right) {
        int mid = (left + right)/2;
        if(arr[mid] >= x) {
            ceil = arr[mid];
            right = mid -1;
            
        }
        else {
            left = mid + 1;
        }
    }
    
    return ceil;
}


int main() {

    vector<int> arr = {3, 4, 4, 7, 8, 10};
    int x = 7;
    int n = arr.size();

    cout << "Floor: " << Floor(arr,n,x) << " Ceil: " << Ceil(arr,n,x);


    return 0;
}