#include <bits/stdc++.h>
using namespace std;

void twoSum(int arr[], int n, int target)
{
    for(int i = 0; i < n; i++)
    {
        for( int j = i+1; j < n; j++)
        {
            int sum = arr[i]+arr[j];
            if(sum == target)
            {
                cout << "YES" << endl;
                cout << i << " " << j;
                return;
            }
        }
    }
    cout << "NO" << endl;
    cout << -1<<" " << -1;
}

int main()
{
    int N = 5;
    int arr[] = {2,6,5,8,11};
    int target = 15;
    
    twoSum(arr,N,target);
    
    return 0;
}

