#include<iostream>
using namespace std;

class grandp
{
public:
    int a,b;

    void input()
    {
        cout<<"Enter Two Integer";
        cin>>a;
        cin>>b;
    }
};

class par : public grandp
{
public:
    mul()
    {
        cout<<"The Multiplication is : "<<(a*b);
    }
};

class chi : public par
{
public:
    power()
    {
        for(int i=0;i<b;i++)
        {
            a=a*a;
        }

        cout<<"the power is : "<<a;
    }
};

int main()
{
    grandp x;
    x.input();
    par y;
    y.
}
