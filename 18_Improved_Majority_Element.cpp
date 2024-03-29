#include <iostream>
#include <algorithm>
using namespace std;

// Function declaration
void majority(int arr[], int n);

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

    // Function call
    majority(arr, n);

    return 0;
}

// Function definition
void majority(int arr[], int n)
{
    int candidate;
    sort(arr, arr + n);
    candidate = arr[n / 2];
    
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == candidate)
        {
            count++;
        }
    }

    if (count > (n / 2))
    {
        cout << "Majority Element is " << candidate << endl;
    }
    else
    {
        cout << "No Majority Element" << endl;
    }
}
