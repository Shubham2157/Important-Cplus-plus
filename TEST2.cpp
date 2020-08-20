#include<iostream>
using namespace std;

class a
{
    public:
        int a=10;
};
class b :: public a
{
    public:
        int b=5
};

class c :: public b
{
    public:
        int c=4

        int get()
        {
            cout<<a<<b<<c;
        }
};

int main()
{
    c.obj;
    obj.get();

    return 0;
}
