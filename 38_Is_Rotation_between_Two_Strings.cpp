#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

bool isRotation(string a, string b)
{
    for (int i = 0; i < a.length(); i++)
    {
        int j = 0;
        while (j<b.length())
        {
            if (!(a[(i+j)%a.length()] == b[j]))
            {
                break;
            }
            j++;
        }
        if (j == a.length())
        {
            return true;
        }
    }
    return false;
    
}

int main()
{
    string  a = "yash";
    string b = "ashy";

    cout<< isRotation(a, b);

}