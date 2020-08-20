#include<iostream>
using namespace std;

int convert(char);
int convert(int);

int main()
{
    int a; char b;
    cout<<"ENTER THE CARACTER TO COVERT IN ASCII";
    cin>>b;
    cout<<"ENTER THE INTEGER TO COVERT IN ASCII";
    cin>>a;
    convert(b);
    convert(a);
    return 0;
}
int convert(char x)
{
    int a;
    a=x;
    cout<<"the ascii value is"<<a<<endl;
}
int convert(int y)
{
    char a;
    a=y;
    cout<<"the ascii value is"<<a<<endl;
}
