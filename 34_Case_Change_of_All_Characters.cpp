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

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
        else{
            s[i] += 32;
        }
    }
    cout<<s<<endl;
}
    