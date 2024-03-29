#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int arr[]  = {45, 40, 35, 30 ,23, 21, 15, 3 , 2, 1};
    int target = 4;
    
    int lower, upper, mid, n;
    n = sizeof(arr)/sizeof(arr[0]);
    upper = n-1;
    lower = 0;
    mid = (lower+upper)/2;

    while (lower <= upper && arr[mid] != target)
    {
        if (arr[mid] > target)
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
        cout<<"element found at index "<< mid;
    }
    else{
        cout<<"Element not found";
    }
    

}