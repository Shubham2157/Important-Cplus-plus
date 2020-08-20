#include<iostream>
using namespace std;

int square(int);
int cube(int);

int main()
{
    int a;

    cout<<"enter no ";
    cin>>a;

    square(a);
    cube(a);
    return 0;
}

int square( int x)
{
    int sq;
    sq= x*x;
    cout<<"the square is "<<sq<<endl;

}
int cube( int x)
{
    int c;
    c= x*x*x;
    cout<<"the square is "<<c<<endl;

}
