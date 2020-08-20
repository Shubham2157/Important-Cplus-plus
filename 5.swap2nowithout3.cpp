#include<iostream>
using namespace std;

int swap(int,int);

int main()
{
    int a=4,b=5;
    swap(a,b);
    return 0;
}
int swap(int a, int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<b;
}
