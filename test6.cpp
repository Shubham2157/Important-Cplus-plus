#include<iostream>
using namespace std;
class ODDEVEN
{
    int *a;
public:
    ODDEVEN()
    {
            a=new int[5] {8,2,10,4,6};

        for(int i=0;i<5;i++)
        {
            if(a[i]%2==0)
            {
                cout<<"\nIT IS EVEN";
            }
            else
            {
                cout<<"\nIT IS ODD";
            }
        }

    }
};
int main()
{
    ODDEVEN OE;
    return 0;
}
