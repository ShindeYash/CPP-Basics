#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s = "1567";
    //Sum of intergers in a string

    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum += s[i] - '0';
    }
    cout<<"Sum of integers is: "<<sum<<endl;
    
    //Note:- Here s[i] directly conversts char 1 to integer value of char 1 (i.e. 49) while performing mathematical operations.
    // Thus, we have to subtract either char '0' or 48 from the number to get original values for performing in operations.
}
