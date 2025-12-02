
#include <bits/stdc++.h>
using namespace std;

void Second_lar_small(vector<int> &arr, int n)
{
    if(n == 1) {
        cout<<"Second Largest : "<< -1 <<"\nSecond Smallest : "<< -1;
        return ;
    }
    sort(arr.begin(), arr.end());
    int Smax = arr[n-1];
    int Smin = arr[0];
    
    for(int i = n-1; i >= 0; i--)
    {
        if(arr[i] < Smax)
        {
            Smax = arr[i];
            break;
        }
    }
    for(int j = 0; j <= n-1; j++)
    {
        if(arr[j] > Smin)
        {
            Smin = arr[j];
            break;
        }
    }
    
    cout<<"Second Largest : "<< Smax <<"\nSecond Smallest : "<< Smin;
}
int main()
{
    
    vector<int> arr = {1};
    int n = arr.size();
    
    Second_lar_small(arr,n);
    
    return 0;
}
