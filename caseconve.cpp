#include <iostream>
// #include<string> //include both libraries(c and c++) to not get missed.
#include <cstring> //for all c strings functions.
#include<cctype> //for tolower
using namespace std;
int main()
{   int  l,i;
    char st[100]; // creating arrays of characters

    gets(st);
    l=strlen(st); //use if there is array, use a.length for string length.

    char ch;
    for ( i = 0; i < l; i++)
    {
        ch=toupper(st[i]); // to lower each characters of array
        cout<<ch;//to print characters in sequence.
    }
   
    

    return 0;
}