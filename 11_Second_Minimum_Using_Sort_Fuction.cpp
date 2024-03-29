#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 6, 7, 2, 3, 4, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array in ascending order
    sort(arr, arr + n);

    // The second smallest element is the element at index 1
    int second_smallest = arr[1];

    // Print the second smallest element
    cout << "Second smallest element: " << second_smallest << endl;

    return 0;
}

// Similarly for second largest element
// you can reaturn element at index "n-2".