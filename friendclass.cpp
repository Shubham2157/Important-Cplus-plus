#include<iostream>
using namespace std;

class A
{
private:
    int c;

public:
    A()//default constructor
    {
        c=10;
    }
    friend class B;
};
class B
{
public:
    void input(A a)
    {

        cout<<"\n"<<a.c;
    }
    void output(A a)
    {
        cout<<"The No take is "<<a.c;
    }
};

int main()
{
   A a;
   B b;
    b.input(a);
    b.output(a);
    return 0;

}
