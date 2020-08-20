#include<iostream>
using namespace std;

int main()
{
    float p,q,res;

    cout<<"enter the price of item : ";
    cin>>p;

    cout<<"enter the no of item : ";
    cin>>q;

    res=q*p;

    res=(res*0.13);
    cout<<"the total profit of 13% is :"<<res;
    return 0;
}
