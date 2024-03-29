#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s = "Yash";
    cout<<"Enter string :- ";
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 'a' - 'A';
        }
        
    }
    cout<<s;
}