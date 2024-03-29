#include <iostream>
#include <algorithm>
using namespace std;

void welcome(int n){
    cout<<"Welcome to yash "<<n <<endl;
    if(n==0){
        return;
    }
    welcome(n - 1);
}

int main()
{
    welcome(10);
}