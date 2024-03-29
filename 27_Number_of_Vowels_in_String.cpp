#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int vowelCount(string s){
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            count++;
        }
        
    }
    return count;
}

int main()
{
    // taking input
    string i;
    cout<<"enter string :";
    getline(cin, i);

    cout<<vowelCount(i);
}