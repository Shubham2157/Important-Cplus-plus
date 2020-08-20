#include<iostream>
using namespace std;

int sum(int,int);

int main()
{
    int a=5,b=5,c;
    c=sum(a,b);
    cout<<"sum is - "<<c;
    return 0;
}
int sum(int x,int y)
{
    int c;

    c=x+y;
    return c;
}
