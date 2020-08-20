#include<iostream>
using namespace std;

int sum(int a,int b,int c=0,int d=0)

{
    return (a+b+c+d);
}

int main()
{
    cout<< "10+12 = "<<sum(10,12)<<endl;
    cout<< "10+12+11 = "<<sum(10,12,11)<<endl;
    cout<< "10+12+11+13 = "<<sum(11,10,12,13)<<endl;

    return 0;
}
