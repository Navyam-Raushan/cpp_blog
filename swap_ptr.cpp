#include <bits/stdc++.h>
using namespace std;
int swap_int(int *n, int *m)
{
    int temp = *n;
    *n = *m;
    *m = temp;
}
int main()
{
    int a;
    int b;

    cin >> a;
    cin >> b;
    
    swap_int(&a,&b);
    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}