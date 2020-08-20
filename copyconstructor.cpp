#include<iostream>
using namespace std;
class test
{
public:
    int x;
    test(int a)
    {
        x=a;
    }
    test(test &i)
    {
        x= i.x;
    }
};

int main()
{
    test a1(20);
    test a2(a1);
    cout<<a1.x;
    cout<<a2.x;
    return 0;
}
