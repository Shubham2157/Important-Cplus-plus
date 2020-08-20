#include<iostream>
using namespace std;

inline int sum(int a,int b) // here we have explicitly declare inline we can also write as int sum(int a,int b)
{
    return(a+b);

}

int main()
{   int a=4;
    int b=5;

    cout<<"Sum is : "<<sum(a,b);
    return 0;
}
