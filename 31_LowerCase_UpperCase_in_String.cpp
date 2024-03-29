#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s = "Yash";
    cout<<"Enter string :- ";
    cin >> s;
    // Ex:- you want to change the first letter to UpperCase of inputed word from User.
    if (s[0] >= 'a' && s[0] <= 'z')
    {
        s[0] -= 'a' - 'A';
        //'a'=97 and 'A'=65 so we will perfrom this when first letter is small and make it capital by changing its int value by subtracting 32 from it.
    }
    cout << s;
}
// Similarly you can perform the first letter always small.