#include <iostream>
using namespace std;

int palindrome(int num)
{
    int lastdigit = 0;
    int reversenum = 0;
    int originalnum = num;

    while (num > 0)
    {
        lastdigit = num % 10;
        reversenum = (reversenum) * 10 + lastdigit;
        num = num / 10;
    }
    /*if (reversenum == originalnum){
        return true;
    }
    else{
        return false;
    } */

    // WE can also return only using following block

    return reversenum == originalnum;
}

int main()
{
    // reverse a number
    int num;
    cin >> num;
    if (palindrome(num)){
        cout << num << " is a palindrome number.";
    }
    else{
        cout << num << " is not a palindrome number.";
    }
    
}