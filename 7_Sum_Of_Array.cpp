# include <iostream>
using namespace std;

int sumArray(int arr[], int len){
    int sum = 0;
    
    for(int i = 0; i < len; i++){
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int array[] = {1,2,3,4,5,6,7};
    int len = sizeof(array)/sizeof(array[0]); //length calculation
    cout << "Sum of array is " << sumArray(array, len);
}