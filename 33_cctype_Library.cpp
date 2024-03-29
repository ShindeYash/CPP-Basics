#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s = "Yash";
    cout<<"Enter string :- ";
    cin >> s;

    //Case Change Operations Using cctype Library.

    //Lower Case
    s[0] = tolower(s[0]);
    cout <<s<<endl;

    //Upper Case
    s[0] = toupper(s[0]);
    cout <<s<<endl;
}