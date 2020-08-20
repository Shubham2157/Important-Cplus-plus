#include<iostream>
using namespace std;

int sum(int,int);
float sum(float,float);

int main()
{
    int a=2;
    int b=3;
    float c=3.3;
    float d=5.2;

    cout<< "sum of two int : "<<sum(a,b)<<endl;
    cout<<  "sum of two float : "<<sum(c,d);

    return 0;
}

int sum(int a, int b)
{
    return(a+b);
}
float sum(float x,float y)
{
    return(x+y);
}
