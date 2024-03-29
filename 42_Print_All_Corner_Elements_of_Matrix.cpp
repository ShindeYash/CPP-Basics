#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cout<<"Enter size of Square Matrix : ";
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

    //Accessing and printing all corner elements
    cout<<"Corner elements of given Matrix are: "<<matrix[0][0]<<" "<< matrix[0][n-1]<<" "<<matrix[m-1][n-1]<< " "<< matrix[m-1][0];

    //Note:- #1 for sum/multiplicaion of all corner elements you can use same code with some modifications.
    // #2 Accessing corners from anticlockwise direction you can just rearrange some values (Above code accesses corners in clockwise direction).
    // #3 Both rectangular/Square (basically all) matrix always have 4 corners.
}