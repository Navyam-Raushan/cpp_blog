#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n,i,j;
    cin>>n;
    int a[n];
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    //checking occurence
    int count=0;
    for (i = 0; i < n-1; i++)
    {
        for ( j = 1; j < n; j++)
        {
            if (a[i]==a[j])
            {
                
                count++;
                
            }
            
        }
        
        
    }
    cout<<endl<<count<<endl;
    

    

    return 0;
}