#include <iostream>
using namespace std;

void leftRotation(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;

    
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

    leftRotation(arr, n);

    // Here Note that if we are asked to rotatae for k times.
    // You can use following code instead above function call.
    /*
    for (int i = 0; i < k; i++)
    {
        leftRotation(arr, n);
    }
    */

    // Print Array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}