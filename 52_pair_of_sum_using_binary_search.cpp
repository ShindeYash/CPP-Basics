#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;
    int arr[size];

    cout << "Enter the elements using space seperation: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + size);
    int target;
    cout << "plase enter target sum : ";
    cin >> target;
    int lower, upper, mid;

    for (int i = 0; i < size; i++)
    {
        upper = size - 1;
        lower = 0;

        while (lower <= upper)
        {
            mid = (lower + upper) / 2;

            if ((arr[mid] + arr[i]) == target)
            {
                cout << "Elements pair found that is " << arr[mid] << " & " << arr[i];
                return 0;
            }
            else if ((arr[mid] + arr[i]) > target)
            {
                upper = mid - 1;
            }
            else
            {
                lower = mid + 1;
            }
        }
    }

    cout << "No such pair found";
}

// Time complexity of above code is o(nlogn)