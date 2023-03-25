#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int a, b, sum=0,i, oddSum=0;
    cout<<"Enter the range"<<endl;
    cin >> a >> b;
    for ( i = a; i <= b; i++)
    {   
        if (i%2==0)
        {
            sum+=i;
        }
        else if (i%2!=0)
        {
            oddSum+=i;
        }
        
    }
    cout<<sum<<endl;
    cout<<oddSum<<endl;
        
        
    




    return 0;
}