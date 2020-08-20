#include <iostream>

using namespace std;

void fun(int a,int b=0,int c=0)
{
    cout<<" "<<a<<" "<<b<<" "<<c<<endl;
}
int main()
{
    fun(2,2,3);
    cout << "Hello world!" << endl;
    return 0;
}
