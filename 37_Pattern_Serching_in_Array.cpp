#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string  a = "aaabacababc";
    string b = "ab";

    int count = 0;
    int start_index[10];
    for (int i = 0; i < a.length(); i++)
    {
        int j = 0;
        while (j < b.length())
        {
            if (a[i+j] == b[j])
            {
                
            }
            else{
                break;
            } 
            j++; 
        }
        
        if (j == (b.length()))
        {
            start_index[count] = i;
            count++;
        }
        
    }
    cout<<"Indexes where pattern present are : ";
    for (int k = 0; k < count; k++)
        {
            cout<<start_index[k]<<" ";
        }
    
}