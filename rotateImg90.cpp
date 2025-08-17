
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>>& arr)
{
    
    int n = arr.size();
    int m = arr[0].size();
    
    vector<vector<int>>rotarr(m,vector<int>(n));
    
    for(int i = 0; i < n; i++)
    {

        for(int j = 0; j < m; j++)
        {
            rotarr[j][n-i-1] = arr[i][j];
        }
    }
    
    return rotarr;
}

int main() {
    vector<vector<int>> arr;
    arr =  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>>rotated = rotate(arr);
    cout << "Rotated Image" << endl;
    for (int i = 0; i < rotated.size(); i++) {
        for (int j = 0; j < rotated[0].size(); j++) {
            cout << rotated[i][j] << " ";
        }
        cout << "\n";
    }

}
