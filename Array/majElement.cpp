#include <bits/stdc++.h>
using namespace std;

int MajorityElem(int arr[], int n)
{
    int k = n/2 + 1;
    for(int i = 0; i < n; i++)
    {
        int cnt = 0;
        for(int j  = 0; j < n;j++)
        {
            if(arr[i] == arr[j])
            {
                cnt++;
                if(cnt >= k)
                {
                    return arr[i];
                }
            }
        }
    }
    return -1;
}

int main()
{
    int arr[] = {3,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << MajorityElem(arr, n);
    return 0;
}