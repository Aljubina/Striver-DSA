#include <bits/stdc++.h>
using namespace std;

int BuySell(int arr[], int n)
{
    int minP = arr[0];
    int minD = 0;
    
    for(int i = 1; i < n; i++)
    {
        if(arr[i] < minP)
        {
            minP = arr[i];
            minD = i;
        }
    }
    int maxP = 0;
    int maxD = 0;
    for(int j = minD+1; j < n; j++)
    {
        if(arr[j] > maxP)
        {
            maxP = arr[j];
            maxD = j+1;
        }
    }
    
    return maxD;
}

int main()
{
    
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<BuySell(arr, n);
    return 0;
}
