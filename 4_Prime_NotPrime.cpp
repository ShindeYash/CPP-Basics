#include <iostream>
using namespace std;

bool isprime(int num)
{
    int noOfFactor = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            noOfFactor += 1;
        }
    }
    return noOfFactor == 2;
}

int main()
{
    // input -> int num
    // Output -> Prime or not Prime?

    int num;
    cin >> num;

    if (isprime(num))
    {
        cout << num << " is a prime number.";
    }
    else
    {
        cout << num << " is not prime number.";
    }
}

/*
We can Also Use the following Function.

-> It uses the sqare root concept to find the output.
-> It is faster than the direct method.
*/

bool prime(int n){
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