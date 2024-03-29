#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    // taking input
    string i;
    cout<<"enter string :";
    getline(cin, i);
    
    string temp = i;
    reverse(i.begin(), i.end());
    if (i == temp)
    {
        cout<<"parlindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    
}