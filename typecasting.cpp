#include<iostream>
using namespace std;

int c=34;
int main(){
    // //Taking input from user and using resolution scope::
    // int a, b, c;
    // cout<<"Enter the value for a:"<<a<<endl;
    // cin>>a;
    // cout<<"Enter the value for b:"<<b<<endl;
    // cin>>b;
    // c= a+b;
    // cout<<"This is local c: "<<c<<endl;
    // cout<< "This is global c: "<<::c<<endl;
    
    //Build in Data types

    int f= 34.5;
    float e= 34.5f;
    double d= 34.5;
    long double h= 34.5l;
    
    cout<<"This is the size of float: "<<sizeof((f))<<endl;
    cout<<"This is the size of float: "<<sizeof((d))<<endl;
    cout<<"This is the size of long double: "<<sizeof(34.5l)<<endl;



    


    return 0;
}