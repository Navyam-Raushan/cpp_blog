#include <iostream>
using namespace std;
float area(double a)
{
    return 3.14 * a * a;
}
float area(int a)
{
    return a * a;
}

int main()
{
    int s;
    double b;
    cin >> s;
    cin>> b;
    cout << area(s)<<endl;
    cout << area(b)<<endl;

    return 0;
}