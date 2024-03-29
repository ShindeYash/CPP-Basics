#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

char max(char a, char b)
{
    if (a > b)
    {
        return a;
    }
    else{
        return b;
    }
    
}

int main()
{
    int n;
    cout<<"enter the size of string :";
    cin>>n;
    char s[n];
    cout<<"enter the string : ";
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }

    char mx = s[0];

    for (int i = 0; i < n; i++)
    {
        mx = max(mx, s[i]);
    }
    cout << "maximum element is " << mx;

// Similarly you can find the min elemetnt of an char array or string.

// in built max function can also be used for chars.

}
    