#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[]  = {2, 3, 4, 5 ,6, 7, 8, 9, 54};
    int target = 9;
    
    int lower, upper, mid, n;
    n = sizeof(arr)/sizeof(arr[0]);
    upper = n-1;
    lower = 0;
    mid = (lower+upper)/2;


    while (lower <= upper && arr[mid] != target)
    {
        if (arr[mid] > target)
        {
            upper = mid-1;
        }
        else{
            lower = mid+1;
        }

        mid = (lower+upper)/2;
    }

    if (arr[mid] == target)
    {
        cout<<"element found at index "<< mid;
    }
    else{
        cout<<"Element not found";
    }
    
    
}