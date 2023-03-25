#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int great(int a, int b, int c)
{
    if (a = b = c)
    {
        return a;
    }

    else if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
        return c;
}

int main()
{
    int t, a, b;
    cin >> t >> a >> b;
    cout << great(t, a, b);

    return 0;
}