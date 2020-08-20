#include<iostream>
using namespace std;

class demo
{
private:
    int a,b,c;
public:
    //demo(int x,int y,int z);//argument or parameter
    demo(int x=0,int y=0,int z=12);//default argument
    display()
    {
            cout<<a<<endl<<b<<endl<<c<<endl;
    }

};

demo::demo(int p,int q,int r)
{
    a=p;
    b=q;
    c=r;
}

int main()
{
    demo x=demo(1,2);//explicit call
    demo y(4,5,6);//implicit call
    x.display();
    y.display();
    return 0;
}
