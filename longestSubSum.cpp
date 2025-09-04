#include <bits/stdc++.h>
using namespace std;

int longestSub(vector<int> &arr)
{
    int n = arr.size();
    int maxlenArr = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(maxlenArr > n-i) break;
        int sum = 0;
        for(int j = i; j < n; j++)
        {
            sum += arr[j];
            if(sum == 0)
            {
                maxlenArr = max(maxlenArr, j-i+1);
            }
        }
    }

    return maxlenArr;
}

int main() 
{
    vector<int> a = {9, -3, 3, -1, 6, -5};
    // vector<int> a = {6, -2, 2, -8, 1, 7, 4, -10};
    // vector<int> a = {1, 0, -5};

    cout << longestSub(a) << endl;
    return 0;
}

// Time Complexity : O(N^2)
// Space Complexity : O(1);