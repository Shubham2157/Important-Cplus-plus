#include<iostream>
using namespace std;

class No_1
{
public:
    int a;

    void ina()
    {
        cout<<"Enter no 1 : ";
        cin>>a;
    }
};
class No_2
{
 public:
    int b;

    void inb()
    {
        cout<<"Enter no 2 : ";
        cin>>b;
    }
};
class No_3
{
    public:
    int c;

    void inc()
    {
        cout<<"Enter no 3 : ";
        cin>>c;
    }
};

class result : public No_1, public No_2,public No_3
{
public:

    void sum()
    {

           cout<<"Sum = "<<(a+b+c);
    }

    void avg()
    {
        cout<<"Average value is"<<((a+b+c)/3);
    }
};

int main()
{
    result a1;

    a1.ina();
    a1.inb();
    a1.inc();
    a1.sum();
    a1.avg();

    return 0;
}
