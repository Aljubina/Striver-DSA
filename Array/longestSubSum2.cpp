#include <bits/stdc++.h>
using namespace std;

int longestSub(vector<int> &arr)
{
    int n = arr.size();
    int maxi = 0;
    int sum = 0;
    unordered_map<int, int> h;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
        if(sum == 0)
        {
            maxi = i + 1;
        }
        else {
            if(h.find(sum) != h.end())
            {
                maxi = max(maxi, i - h[sum]);
            } else {
                h[sum] = i;
            }
        }
    }
    return maxi;
}

int main()
{
    vector<int> a = {9, -3, 3, -1, 6, -5};
    // vector<int> a = {6, -2, 2, -8, 1, 7, 4, -10};
    // vector<int> a = {1, 0, -5};
    cout << longestSub(a) << endl;

    return 0;
}

//Time Complexity : O(N)