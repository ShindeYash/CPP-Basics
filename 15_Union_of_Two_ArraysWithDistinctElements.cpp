#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {3,4,5,6546,7,8};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    int arr_union[m+n];
    int union_end = 0;

    for (int k = 0; k < n; k++)
    {
        arr_union[k] = arr2[k];
        union_end++;
    }
    

    for (int i = 0; i < m; i++)
    {
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            arr_union[union_end] = arr1[i];
            union_end++;
        }
    }

    for (int f = 0; f < union_end; f++)
    {
        cout<<arr_union[f]<<" ";
    }
    
}