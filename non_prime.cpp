#include <bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    bool result = true;
    if (n == 1 && n==0)
    {
        result = false;
    }
    else if (n==2)
    {
        result = true;
        
    }
    
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                result = false;
                break;
            }
        }
    }
   return result; 
}
int main()
{
    int i, n;
    cin >> n;
    int a[n];
    int *ptr=a;
    for (i = 0; i < n; i++)
    {
        cin >> *(ptr+i);
    }
    sort(ptr, ptr + n);

    for (i = 0; i < n; i++)
    {
        if (!isprime(*(ptr + i)))
        {
            cout << *(ptr + i)<<" ";
        }
    }

    return 0;
}
