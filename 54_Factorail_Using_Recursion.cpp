#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n - 1);
}

int main()
{
    cout <<"Factorial value is " <<factorial(5);
}