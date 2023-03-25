// insert the character
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
// void rev(string s)
// {
//     int i;
//     for (i = s.length(); i >= 0; i--) // just as we reverse an array
//     {
//         cout << s;
//     }
// }
int main()
{
    // inserting the charater
    // cin >> p; // tell position
    // // cin >> n;  // tell no. of characters
    // cin >> ch; // tell characters.
    // cout << s.insert(p, 1, ch);
    string s;
    int i;
    char ch;
    getline(cin, s);

    // to reverse the string construct functn;
    for ( i = s.length(); i >=0; i--)
    {
        cout<<s[i];
    }
    

    return 0;
}