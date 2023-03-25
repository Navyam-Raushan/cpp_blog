#include<iostream>
using namespace std;
int main(){
    int a= 45, b=15;
    
    cout<<"This is the value of a:"<<a<<endl;
    cout<<"This is the value of b:"<<b<<endl;
   
    //Arithmetic operators
    cout<< "This is the value of: "<<(a+b)<<endl;
    cout<< "This is the value of: "<<(a-b)<<endl;  
    cout<< "This is the value of: "<<(a*b)<<endl;
    cout<< "This is the value of:a%b "<<(a/b)<<endl;
    cout<< "This is the value of: "<<((a%b))<<endl;
    cout<< "This is the value of: "<<(a++)<<endl;
    //first print then increase
    cout<< "This is the value of: "<<(++a)<<endl;
    //first increase then print   
    

    cout<< "This is the value of: "<<(a--)<<endl; 
    //The same value will be printed   
    cout<< "This is the value of: "<<(--a)<<endl;
    // the value will be decreased by 2, and then printed.

    //Comparison operators (only give value in 0 and 1.)
    cout<< "This is the value of: "<<((a==b))<<endl;
    cout<< "This is the value of: "<<((a<=b))<<endl;
    cout<< "This is the value of: "<<((a>=b))<<endl;
    cout<< "This is the value of: "<<((a!=b))<<endl;
    cout<< "This is the value of: "<<((a<b))<<endl;
    cout<< "This is the value of: "<<((a>b))<<endl;
    
    //Logical operators
    cout<< "This is the value for and: "<<((a==b) && (a>b))<<endl;
    cout<< "This is the value for or: "<<((a==b) || (a>b))<<endl;
    cout<< "This is the value for negation: "<<((!a==b))<<endl;







        
    


    

    return 0;
}