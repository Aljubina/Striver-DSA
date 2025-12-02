#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> SetMatrix(vector<vector<int>> mat, int n, int m)
{
    
    vector<int> row(n,0);
    vector<int> col(m,0);
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(mat[i][j] == 0)
            {
                row[i] = -1;
                col[j] = -1;
            }
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(row[i] == -1 || col[j] == -1)
            {
                mat[i][j] = 0;
            }
        }
    }
    
    return mat;
}

int main() {
    
    vector<vector<int>> matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    int n = matrix.size();  //No of rows
    int m = matrix[0].size();  //No of Columns
    
    vector<vector<int>> ans = SetMatrix(matrix, n, m);

    cout << "The Final matrix is: \n";
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}