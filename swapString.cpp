#include<iostream>
using namespace std;

void swap(char [],char []);

int main()
{
    string a,b;
    cout<<"enter the string 1 : ";
    cin>>a;
    cout<<"enter the string 2 : ";
    cin>>b;
    swap(a,b);
    return 0;
}

void swap(char a[30],char b[30])
{
    char temp[30];
    for(int i=0;i<30;i++)
    {
        cin<<a[i];
        cin<<b[i];
    }

    temp=a;
    a=b;
    b=temp;

    cout<<"the value of a and b : "<<endl;
    cout<<a<<endl;
    cout<<b;
}
