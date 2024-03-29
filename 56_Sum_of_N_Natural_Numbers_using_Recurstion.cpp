#include <iostream>
#include <algorithm>
using namespace std;

int sum(int n){
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}

int main()
{
    int n;
    cout<<"Please enter the Number : ";
    cin>>n;
    cout<<"sum of first given natural nums is " <<sum(10);
}