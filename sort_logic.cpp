#include <bits/stdc++.h>
using namespace std;
void swap_int(int a, int b)
{
    int temp = a;
    a=b;
    b = temp;
}
int main()
{
    int i, j, n;
    // cin >> n;
    // int a[20];
    int a;
    int b;
    cin>>a;
    cin>>b;

    // for (i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // sorting our array
    // for (i = 0; i < n - 1; i++)
    // {
    //     for (j = i+1; j < n; j++)
    //     {
    //         if (a[i] > a[j])
    //         {
    //         //    int temp=a[i];
    //         //    a[i]=a[j];
    //         //    a[j]=temp;
    //             swap_int(a[i],a[j]);
    //         }
    //     }
    // }
    // for ( i = 0; i < n; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    swap_int(a,b);
    cout<<a;
    cout<<b;

    

    return 0;
}
