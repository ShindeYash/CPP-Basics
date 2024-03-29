#include <iostream>
using namespace std;

bool is_pair_check(int arr[], int n, int target)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i+1; j < n - 1; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter No of elements in array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter target: ";
    cin >> target;

    cout << is_pair_check(arr, n, target);
}