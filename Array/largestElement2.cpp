
#include <iostream>
using namespace std;

void sort(int arr[], int n)
{
    for(int i = 0; i <= n-2; i++)
    {
        int min = i;
        for(int j = i; j <= n-1; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i] , arr[min]);
    }
}

int main() {
    int arr[] = {-8,-10,-5,-7,-9};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    sort(arr, n);
    
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << arr[n-1];

    return 0;
}