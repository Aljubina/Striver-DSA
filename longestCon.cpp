
#include <iostream>
#include <vector>
using namespace std;

vector<int> Leader(int arr[], int n)
{
    vector<int> ans;
    for(int i = 0; i < n; i++)
    {
        bool leader = true;
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] < arr[j])
            {
                leader = false;
                break;
            }
        }
        if(leader)
        {
            ans.push_back(arr[i]);
        }
    }
    return ans;
}

int main() {
    int n = 6;
    int arr[n] = {10, 22, 12, 3, 0, 6};

    vector<int> ans = Leader(arr,n);
  
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}



-----------------------------------OPTIMAL APPROACH-------------------------------

#include <iostream>
#include <vector>
using namespace std;

vector<int> Leader(int arr[], int n)
{
    vector<int> ans;
    int max = arr[n-1];
    ans.push_back(max);
    for(int i = n-2 ; i >= 0; i--)
    {

        if(arr[i] > max)
        {
            ans.push_back(arr[i]);
            max = arr[i];
        }
    }
    return ans;
}

int main() {
    int n = 6;
    int arr[n] = {10, 22, 12, 3, 0, 6};

    vector<int> ans = Leader(arr,n);
    int m = ans.size();
    for(int i = m-1 ;i >= 0; i--){
        cout<<ans[i]<<" ";
    }

    return 0;
}