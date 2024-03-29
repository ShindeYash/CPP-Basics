#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 4, 56, 345, 46, 46363, 346, 25, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maximum = 0;
    int second_maximum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maximum)
        {
            second_maximum = maximum;
            maximum = arr[i];
        }
        else if (arr[i] > second_maximum)
        {
            second_maximum = arr[i];
        }
        else
        {
            // pass
        }
    }
    cout << second_maximum << endl;
}

// you can find second minimum with this code by changing > to <.
