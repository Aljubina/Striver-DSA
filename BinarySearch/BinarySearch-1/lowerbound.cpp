#include <bits/stdc++.h>
using namespace std;

class lowerBoundFinder {
    public:
    int lowerBound(vector<int> arr, int n, int x) {
        int low = 0;
        int high = n -1;
        int ans = n;

        while(low <= high)
        {
            int mid = (low+high)/2;
            if(arr[mid] >= x)
            {
                ans = mid;
                high = mid-1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};


int main() {
    vector<int> arr = {3, 5, 8, 15, 19}; 
    int n = arr.size();                  
    int x = 9;                         

    lowerBoundFinder finder;           
    int ind = finder.lowerBound(arr, n, x);  // Call method to find lower bound

    cout << "The lower bound is the index: " << ind << "\n";  // Output the result
    return 0;
}