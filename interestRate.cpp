#include <iostream>
using namespace std;
double excess(double amount, double rate)
{
    return (amount*(rate/100));
}
void excess(double amount) //using overloading of function.
{
    for (double rate = 7.5; rate <=10; rate+=0.25)
    {
       cout<<excess(amount,rate)<<endl;
    }
    
}


int main()
{
    double amount,rate;
    cout<<"Enter amount: "<<endl;
    cin>>amount;
    
    cout<<"Enter Rate: "<<endl;
    cin>>rate;
    
    cout<<excess(amount,rate)<<endl;
    excess(amount);

    return 0;
}



