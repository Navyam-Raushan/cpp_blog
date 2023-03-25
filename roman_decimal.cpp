#include <bits/stdc++.h>
using namespace std;
int roman_value(char ch)
{
    switch (ch)
    {
    case 'I':
        return 1;
        break;
    case 'V':
        return 5;
        break;
    case 'X':
        return 10;
        break;
    case 'L':
        return 50;
        break;
    case 'C':
        return 100;
        break;
    case 'D':
        return 500;
        break;
    case 'M':
        return 1000;
        break;
    }
}
int roman_print(string r)
{
    int num = 0;
    int temp = 0;
    for (int i = r.length() - 1; i >= 0; i--)
    {
        int digit = roman_value(r[i]);
        if (digit >= temp)
        {
            num += digit;
        }
        else
        {

            num -= digit;
        }

        temp = digit;
    }

    return num;
}
int main()
{
    string rom;
    cin >> rom;
    cout << roman_print(rom);
}