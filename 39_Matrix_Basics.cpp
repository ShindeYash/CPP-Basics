#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //Matrix is nothing but two dimenstional array

    //Declaration of matrix
    int matrix_name[3][3];

    //Accessing  Elements of Matrix
    matrix_name[2][2] = 10;
    cout<<matrix_name[2][2];

    //Taking input of whole Matrix
    cout<<"Please Enter Matrix : ";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>matrix_name[i][j];
        }
    }
    
    //Printing output of whole Matrix
    cout<<"Matrix is as follows: "<<endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<matrix_name[i][j]<<" ";
        }
        cout<<endl;
    }
}