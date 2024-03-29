#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

/*
 two strings are considered anagrams if they have the same characters with the same frequency, regardless of the order of those characters.

Here's an example:

String "listen" is an anagram of "silent" because both strings have the same set of characters ('l', 'i', 's', 't', 'e', 'n').
*/

bool isAnagram(string i, string j){
    sort(i.begin(), i.end());
    sort(j. begin(), j.end());
    if(i == j){
        return true;
    }
    return false;
}

int main()
{
    // taking input
    string i;
    cout<<"enter string 1:";
    getline(cin, i);
    string j;
    cout<<"enter string 2:";
    getline(cin, j);

    cout<<isAnagram(i, j);
}