#include <iostream>

using namespace std;

class item
{
private:
    static int a;
public:
    void show()
    {
        a++;
        cout<<"the value of a = "<<a<<endl;
    }
};

int item :: a=20;

int main()
{
    item x,y,z;
    x.show();
    y.show();
    z.show();
    return 0;
}
