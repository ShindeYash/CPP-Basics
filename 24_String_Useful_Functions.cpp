#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    // Size function
    string i;
    cout<<"enter string :";
    getline(cin, i);
    cout<<i.size()<<endl;

    // Length fuction
    cout<<i.length()<<endl;

    // Sort funcution from algorithms library
    sort(i.begin(), i.end());
    cout<<i<<endl;

    // Reverse function
    reverse(i.begin(), i.end());
    cout<<i<<endl;
}