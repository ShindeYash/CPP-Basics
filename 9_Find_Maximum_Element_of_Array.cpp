# include <iostream>
using namespace std;

int arrMax(int arr[], int len)
{
    int max = arr[0];
    for(int i = 1; i < len; i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int array[] = {3,4,5,2345,35,-4524523, 234,3,35,34,36,3,53,3,5};
    int len = sizeof(array)/sizeof(array[0]); //length calculation
    cout<< "Maximum of the array is " << arrMax(array, len);

    return 0;
}