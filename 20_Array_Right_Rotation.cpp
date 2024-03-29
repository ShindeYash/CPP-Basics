#include <iostream>
using namespace std;

void rightRotation(int arr[], int n)
{
    int temp = arr[n-1];
    for (int i = n-1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;

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

    // rightRotation(arr, n);
    
    int k = 2;
    for (int i = 0; i < k; i++)
    {
        rightRotation(arr, n);
    }

    // Here Note that if we are asked to rotatae for k times.
    // You can use following code instead above function call.
    /*
    for (int i = 0; i < k; i++)
    {
        rightRotation(arr, n);
    }
    */

    // Print Array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}