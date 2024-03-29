# include <iostream>
using namespace std;

int main()
{
    int size; 
    cout << "Enter the size of an array: ";  cin>>size;
    int arr[size];

    cout<<"Enter the elements using space seperation: ";
    for( int i = 0; i < size; i++){
        cin>> arr[i];
    }

    cout << "Your array is: ";
    for( int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }
}D