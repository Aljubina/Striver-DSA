#include <bits/stdc++.h>
using namespace std;

void Union(int arr1[], int arr2[], int n, int m)
{
    set <int> set;
    for(int i = 0; i < n;i++)
    {
        set.insert(arr1[i]);
    }
    for(int i = 0; i < m;i++)
    {
        set.insert(arr2[i]);
    }
    
    for(int x : set)
    {
        cout<< x <<" ";
    }
    
}

int main()
{
    int arr1[] = {1,2,3,4,5,9};
    int arr2[] = {2,3,4,6};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    
    Union(arr1,arr2,n,m);
    
    
    return 0;
}

