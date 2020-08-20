#include<iostream>
using namespace std;

class A
{
private:
    int a,b,c;
public:
    int x;
    A(void);
    void show()
    {
        cout<<"X = "<<x<<endl<<"A = "<<a<<endl<<"B = "<<b<<endl<<"C = "<<c;
    }
};

A::A()
{
    cout<<"Constructor called"<<endl;
    x=5;
    a=10;
    b=15;
    c=20;
}

int main()
{
    A x;
    x.show();
    return 0;
}
