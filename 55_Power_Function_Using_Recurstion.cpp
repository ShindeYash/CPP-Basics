#include <iostream>
#include <algorithm>
using namespace std;

int power(int n, int m){
    if(m==0){
        return 1;
    }
    return n*power(n, m-1);
}

int main()
{
    // here we have to provide the input of 'n' rasie to power of 'm'
    cout<<"power of given values is " <<power(2, 10);
}