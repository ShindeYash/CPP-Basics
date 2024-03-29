# include <iostream>
using namespace std;

int linearsearch(int arr[], int len, int element)
{
    for(int i = 0; i < len; i++){
        if ( arr[i] == element){
            return i;
        }
    }
    return -1;
}
int main()
{
    int array[] = {3,4,5,2345,35,-4524523, 234,3,35,34,36,3,53,3,5};
    int len = sizeof(array)/sizeof(array[0]); //length calculation
    int index = linearsearch(array, len, 35);

    if (index==-1){
        cout << "Element is not found.";
    }else{
        cout<< "Elemetn found at Index :  " << index;
    }

    return 0;
}