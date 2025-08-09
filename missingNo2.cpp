#include <iostream>
#include <vector>
using namespace std;

int findMissing(vector<int> arr, int n)
{
    int sum = (n*(n+1))/2;
    
    int s2 = 0;
    for(int i = 0; i < n-1; i++)
    {
        s2 += arr[i];
    }
    
    int missing =  sum-s2;
    return missing;
}

int main() {
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = findMissing(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}


