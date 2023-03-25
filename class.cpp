#include <iostream>
using namespace std;
class myclass
{
public:
    int n;
    float m;
};

int add(int a, int b)
{
    return a + b;
}
int main()
{
    // int a, b;
    // cin>>a>>b;
    // cout<<add(a,b);
    myclass obj; //declaring a object.
    // obj.n = 34;
    // obj.m = 34.45;
    cin>>obj.n;
    cin>>obj.m;

    return 0;
}