#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter size of Square Matrix : ";
    cin >> m >> n;
    int matrix[m][n];

    // Taking input of whole Matrix
    cout << "Please Enter Matrix : ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // 90 degree Rotation //

    // Step1 - take transpose of matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
        
    }


        // Step 2 - Column Swap
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n/2; j++)
        {
            swap(matrix[i][j], matrix[i][n-j-1]);
        }
        
    }
    


// Printing output after taking transpose of Matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

}