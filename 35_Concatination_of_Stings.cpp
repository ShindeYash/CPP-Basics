#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string a = "Yash";
    string b = "Pradeep shinde";

    string c = a+ " " + b;
    cout<<c<<endl;

    a += " "+ b;
    cout<<a;

}