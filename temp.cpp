# include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int n[100];

    int num;
    cout << "Enter the Number : ";
    cin >> num;

    int count = 0;
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the number "<< i+1 << " : ";
        cin >> n[i];   
    }
    
    for (int i = 0; i < num; i++)
    {
        cout << n[i] << "   ";
    }
    
}