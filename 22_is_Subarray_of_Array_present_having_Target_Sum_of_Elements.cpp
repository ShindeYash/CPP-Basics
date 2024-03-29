// 22_Print_Subarray_of_Array_Present_having_Target_Sum_of_Elements.cpp

#include <iostream>
using namespace std;

bool subarraySum(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == target)
            {
                return true;
            }
        }
    }
    return false;
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

    int target;
    cout << "Enter Target : ";
    cin >> target;

    cout << subarraySum(arr, n, target);
}