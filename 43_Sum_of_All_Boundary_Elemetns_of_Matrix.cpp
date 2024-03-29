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

    // Sum of all Boundary Elemetns of Matrix
    int Boundary_Sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==0 || i== m-1 || j == 0 || j == n-1)
            {
                Boundary_Sum += matrix[i][j];
            }
            
        }
        
    }
    cout << "Some of all boundary elemetns : "<< Boundary_Sum << endl;
    

}