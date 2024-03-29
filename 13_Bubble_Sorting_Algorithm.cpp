#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 4, 56, 345,456,36,356,346,36,36, 25, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int swap_flag = 0;
    do
    {
        swap_flag = 0;
        for (int i = 0; i < n-1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swap_flag++;
            }
        }
    } while (swap_flag != 0);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<< endl;
    }
}