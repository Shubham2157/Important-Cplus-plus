#include<iostream>
using namespace std;

class demo
{
    public:
    demo()
    {
        cout<<"constructor is executed"<<endl;
    }

    ~demo()
    {
        cout<<"distructor is created"<<endl;
    }
};

int main()
{
    demo d,p,q;
    return 0;
}
