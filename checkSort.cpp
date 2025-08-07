
#include <iostream>
using namespace std;

bool sorted(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > arr[i+1])
        {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<sorted(arr,n);

    return 0;
}
