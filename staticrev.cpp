#include <iostream>

using namespace std;

class item
{
private:
     int a;
public:
    void show()
    {
        a=20;
        a++;
        cout<<"the value of a = "<<a<<endl;
    }
};


int main()
{
    item x,y,z;
    x.show();
    y.show();
    z.show();
    return 0;
}
