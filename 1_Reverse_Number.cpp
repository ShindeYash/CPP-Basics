#include <iostream>
using namespace std;

int reverse(int num)
{
    int lastdigit = 0;
    int reversenum = 0;

    while (num > 0)
    {
        lastdigit = num % 10;
        reversenum = (reversenum) * 10 + lastdigit;
        num = num / 10;
    }
    return reversenum;
}

int main()
{
    // reverse a number
    int num;
    cin >> num;
    cout << reverse(num);
}