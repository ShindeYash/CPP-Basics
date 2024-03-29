#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int m, n;
    cout<<"Enter size of Matrix : ";
    cin>>m>>n;
    int matrix[m][n];

    //Taking input of whole Matrix
    cout<<"Please Enter Matrix : ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>matrix[i][j];
        }
    }

    // Sum of all elements of Matrix
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += matrix[i][j];
        }
    }
    cout<<"Sum of all elements of Matrix: "<<sum<<endl;

    // Similarly we can solve the questions of multipliction of all the elemetnts
    // Similarly we can also find the target element in an array and with some modifications we can also return the index of that found element.
}