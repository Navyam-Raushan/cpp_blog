#include <bits/stdc++.h>
using namespace std;
int main()
{
    // enter number
    int n;
    cin >> n;
    int p;
    cin >> p;
    int r;
    cin >> r;
    int calc;
    calc = pow(n, p);
    r = calc % r;
    cout << calc << endl;
    cout << r;
}
//one case is wrong
// 13
// 4
// 15