#include <iostream>
using namespace std;

// The majority element of an array is an element that appears more than half the number of times in the array.

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
    for (int i = 0; i < n; i++)
    {
        int majority_element = arr[i];
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (majority_element == arr[j])
            {
                count++;
            }
        }

        if (count > (n / 2))
        {
            cout << "Majority Element is " << majority_element << endl;
            return;
        }
    }

    cout << "No Majority Element" << endl;
}
