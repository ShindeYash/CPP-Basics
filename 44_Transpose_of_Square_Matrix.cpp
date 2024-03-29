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

    // Taking transpose of Matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < i; j++)
        {

            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Printing output after taking transpose of Matrix
    cout << "Please Enter Matrix : ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}