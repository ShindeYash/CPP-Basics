#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of Square Matrix : ";
    cin>>n;
    int matrix[n][n];

    //Taking input of whole Matrix
    cout<<"Please Enter Matrix : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>matrix[i][j];
        }
    }

    // Sum of Primary Diagonal Elements
    int sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += matrix[i][i];
    }
    cout<<"sum of primary diagonal elements : "<<sum1<<endl;

    // Sum of Secondary Diagonal Elements
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum2 += matrix[n-1-i][i];
    }
    cout<<"sum of secondary diagonal elements : "<<sum2<<endl;

    // Sum of all diagonal elements
    cout<<"sum of all diagonal elements : "<<sum1+sum2<<endl;

    // Note you can also use traversing to accsess the diagonal elemetns as follows 
    // Primary diagonal elements "if(i==j)"
    // Secondary diagonal elements "if(i+j==n-1)"

    // Using same code we can also find the difference between primary and secondary diagonal elements.

}