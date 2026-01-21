#include <bits/stdc++.h>
using namespace std;

int UpperBound(vector<int> arr, int n, int x) {
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > x) {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {3, 5, 8, 15, 19}; 
    int n = arr.size();                  
    int x = 3;       
    
    int Up = UpperBound(arr, n, x);
    cout<<"Upper Bound is: "<<Up<<endl;
    return 0;
}