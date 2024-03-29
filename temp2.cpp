# include <iostream>
#include <math.h>
using namespace std;

bool prime(int n){
    if (n == 1 or n == 0)
    {
        return false;
    }
    
    int temp = sqrt(n);
    for (int i = 2; i <= temp; i++)
    {
        if (n%i==0)
        {
            return false;
        }
        
    }
    
    
    return true;
}

int main()
{
    int n1, n2;
    cout<<"Enter Number1: ";
    cin >> n1;
    cout<<"Enter Number2: ";
    cin >> n2;

    if (prime(2))
    {
        cout<<"Prime";
    }
    else{
        cout<<"not prime";
    }
}