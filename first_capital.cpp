// capitalize first letter of each word.
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;
string capital(string s)
{
    int i;

    for (i = 0; i < s.length(); i++)
    {
        if (i == 0)
        {
            s[i] = toupper(s[i]);
        }
        else if (s[i - 1] == ' ')
        {
            s[i] = toupper(s[i]);
        }
    }
    return s;

    }
    int main()
    {
        string str;
        int i;
        
        getline(cin,str);
        // for (i = 0; i < l; i++)
        // {
        //     cin>>str[i];
        // }
        cout<<"String required: "+ capital(str);

        return 0;
    }