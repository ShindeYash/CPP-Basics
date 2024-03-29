#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int arr[]  = {0, 0 , 0, 1 ,1 ,1 ,1 ,1 ,1 ,1, 2, 2, 2 ,2 ,2,3};
    int target = 1;
    
    int lower, upper, mid, n;
    n = sizeof(arr)/sizeof(arr[0]);
    upper = n-1;
    lower = 0;
    mid = (lower+upper)/2;

    while (lower <= upper )
    {
        if (arr[mid] == target && arr[mid] != arr[mid+1])
        {
            break;
        }
        else if (arr[mid] <= target)
        {
            lower = mid + 1;
        }
        else{
            upper = mid - 1;
        }
        mid = (lower+upper)/2;
    }

    if (arr[mid] == target)
    {
        cout<<"First Occarance of element found at index "<< mid;
    }
    else{
        cout<<"Element not found";
    }

}