#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(string *x)
{
    string str1 = *x;
    reverse(str1.begin(), str1.end());
    if (str1 == *x)
    {
        cout << str1<<endl;
        return true;
    }
    else
    {
        cout << str1<<endl;
        return false;
    }
}
int main()
{
    string n;
    getline(cin, n);
    if (ispalindrome(&n))
    {
        cout << n << " is a palindrome" << endl;
    }
    else
        cout << " NO palindrome" << endl;

    return 0;
}
