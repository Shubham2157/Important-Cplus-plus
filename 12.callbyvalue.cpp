//wap to discuss call by value
#include<iostream>
using namespace std;
void swap(int,int);

int main()
{
    int a,b;
    cout<<"enter the values to swap";
    cin>>a>>b;

    swap(a,b);

 return 0;
}

void swap(int x,int y)
{
    int c =x;
     cout<<"after swaping value";
    x=y;
    y=c;
    cout<<x<<y;
}
