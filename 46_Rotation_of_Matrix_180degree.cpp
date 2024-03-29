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

    // 180 Degree Rotation //

    // Step 1:- Swapping of rows from both ends with rows equidistnce from each other i.e. Till center.
    for(int i = 0; i < m/2; i++){
        for (int j = 0; j < n; j++)
        {
                swap(matrix[i][j], matrix[m-1-i][j]);
        }
        
    }

    //Step 2:- Reverese Each Row
    for (int i = 0; i <m ; i++)
    {
        reverse(matrix[i], matrix[i]+n);
    }
    
    // Note :- Here step1 and step2 can change its order which will not affect result

    
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