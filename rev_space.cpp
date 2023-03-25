#include <bits/stdc++.h>
using namespace std;

string rev_str(string s)
{
    string rev_string = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        rev_string += s[i];
    }
    return rev_string;
}
string rev_space(string str)
{
    str += " ";
    int p = 0;
    string new_rev = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            new_rev += rev_str(str.substr(p, i - p)) + " ";
            p = i + 1;
        }
    }
    return new_rev;
}
int main()
{
    string s;
    getline(cin, s);
    rev_str(s);
    cout <<rev_space(s);
    return 0;
}