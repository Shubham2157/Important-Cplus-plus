#include<iostream>
using namespace std;


class ADD2
{
public:
    ADD2(int a,int b,int c,int d)
    {
        cout<<"First no is = "<<a<<" + "<<b<<"i"<<endl;
        cout<<"Second no is = "<<c<<" + "<<d<<"i"<<endl;
        a=a+b;
        c=c+d;
        cout<<"Te final result of two complex no. is "<<a<<" + "<<c<<"i";
    }
};

int main()
{
    ADD2 a(3,4,5,6);
    return 0;
}
