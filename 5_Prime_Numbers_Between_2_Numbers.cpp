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
    int A, B;
    cout << "Please enter A: ";
    cin >> A;
    cout << "Please enter B: ";
    cin >> B;

    int primenumbers[B-A];
    int Array_Size = -1;
    for(int i = A+1; i < B; i++){
        if (isprime(i)){
            Array_Size += 1;
            primenumbers[Array_Size] = i;
            //cout << i << endl;
        }
    }

    for(int j = 0; j <= Array_Size; j++){
        cout<< primenumbers[j] << endl;
    } 
}