# include <iostream>
using namespace std;

int arrMin(int arr[], int len)
{
    int min = arr[0];
    for(int i = 1; i < len; i++){
        if (min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int array[] = {3,4,5,2345,35,-4524523, 234,3,35,34,36,3,53,3,5};
    int len = sizeof(array)/sizeof(array[0]); //length calculation
    cout<< "Minimum of the array is " << arrMin(array, len);

    return 0;
}