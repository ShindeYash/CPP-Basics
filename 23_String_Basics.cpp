#include <iostream>
#include <string>
using namespace std;

int main()
{
    // # array of chars can be created and printed as follows #
    char yash[] = {'y','a','s','h'};
    int size = sizeof(yash)/sizeof(yash[0]);

    for (int i = 0; i < size; i++)
    {
        cout<<yash[i] <<" ";
    }
    cout << endl;
    // Note:- You can also directly print the char array but for doing that you have add the Null ("/0") as last element.
    char yash1[] = {'y','a','s','h', '\0'};
    cout<<yash1<<endl;

    // Note:- You can perform most of the int array operations on the char array as well to solve the quesions.

    // Taking input from the user
    // char s[10];
    // cout<<"Enter the string: ";
    // cin>>s;
    // cout<<s<<endl;
    // Note: here from above code we can only store sigle word having give length of string. If you try to store more words it will only take first word. It you try to store single word having more length it will thorow error.
    
    // Taking string using string datatype
    string m = "yash shinde";
    cout << m << endl;

    // Taking input using string type variable
    // string k;
    // cout<<"Enter String: ";
    // cin>>k;
    // cout<<k<<endl;
    // Note :- Still we can't store the whole line here.

    // Taking whole line as input
    string n;
    cout<<"Enter String: ";
    getline(cin, n);
    cout<<n<<endl;

    // Accessing the elements of string
    int i = 0;
    while(n[i] != '\0')
    {
        cout<<n[i];
        i++;
    }
    cout<<endl;

    // we can also use for loop with '\0' charcter condition
    for (int i = 0; i != '\0'; i++)
    {
        cout<<n[i];
    }
    cout<<endl;
    // Note :- here '\0' is null character and it must be written in single quotes as it is character not string.

    // Another method to accessing string elemets
    for (int i = 0; i < n.length(); i++)
    {
        cout<<n[i];
    }
    cout<<endl;

    // similarly we can use string.size()
    for (int i = 0; i < n.size(); i++)
    {
        cout<<n[i];
    }
    cout<<endl;
}