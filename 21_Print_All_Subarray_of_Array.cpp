#include <iostream>
using namespace std;

void subarray(int arr[], int n){
    cout << "Empty array is subarray of all array : []"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j >= i; j--)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
        
    }
    
}

int main()
{
    cout << "Enter Size of Array : ";
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element " << i + 1 << " : ";
        cin >> arr[i];
    }

    subarray(arr, n);
}