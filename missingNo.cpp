#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i < n; i++)
    {
        if(arr[i] != i+1)
        {
            cout<<i+1;
            break;
        }
    }

    return 0;
}
