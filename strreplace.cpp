//by this code You can replace a particular character
#include<iostream>
#include<string>
using namespace std;
int main(){
    char ch; int m;
    string s1;
    cout<<"Enter string"<<endl;
    getline(cin,s1);
    cout<<"Enter index"<<endl;
    cin>>m;
    cout<<"Enter character"<<endl;
    cin>>ch;
    s1[m]= ch;
    cout<<s1;
    

    





    return 0;
}