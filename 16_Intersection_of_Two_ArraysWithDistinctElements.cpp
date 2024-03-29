#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {9,6546,7,8};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    int arr_inter[min(m,n)];
    int inter_end = 0;

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
        if (flag == 1){
            arr_inter[inter_end] = arr1[i];
            inter_end++;
        }
    }

    cout<<"intersection of array is :" ;

    for (int f = 0; f < inter_end; f++)
    {
         cout<<arr_inter[f]<<" ";
    }  
    
}