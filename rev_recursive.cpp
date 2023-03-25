#include <bits/stdc++.h>
using namespace std;
int num = 0;
int rev_n(int n)
{
    if (n)
    {
        

    int r;
    r = n % 10;
    num = num * 10 + r;
    rev_n(n / 10);
    return num;
    }
}
int main()
{
    int n;
    cin >> n;
    cout << rev_n(n);

    return 0;
}