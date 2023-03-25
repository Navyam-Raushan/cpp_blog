#include <iostream>
#include <string>
using namespace std;
int main()
{

    string s1;
    char m;
    int p;

    getline(cin, s1);
    cin >> p;
    cin >> m;

    
    s1.insert(p-1, 1, m); //I have subtracted 1 because index starts from 0.
    cout << s1;

    return 0;
}