//Better approach

#include <bits/stdc++.h>
using namespace std;

void Second_lar_small(vector<int> &arr, int n)
{
    if(n == 1 || n==0) {
        cout<<"Second Largest : "<< -1 <<"\nSecond Smallest : "<< -1;
        return ;
    }
    int small = INT_MAX, Sec_small = INT_MAX;
    int large = INT_MIN, Sec_large = INT_MIN;
    
    for(int i = 0; i <= n-1; i++)
    {
        if(arr[i] > large)
        {
            large = arr[i];
        }
        if(arr[i] < small)
        {
            small = arr[i];
        }
    }
    for(int i = 0; i <= n-1 ; i++)
    {
        if(arr[i] < Sec_small && arr[i] != small)
        {
            
            Sec_small = arr[i];
        }
        if(arr[i] > Sec_large && arr[i] != large)
        {
            Sec_large = arr[i];
        }
    }
    
    cout<<"Second Largest : "<< Sec_large <<"\nSecond Smallest : "<< Sec_small;
}
int main()
{
    
    vector<int> arr = {1,2,4,6,7,5};
    int n = arr.size();
    
    Second_lar_small(arr,n);
    
    return 0;
}