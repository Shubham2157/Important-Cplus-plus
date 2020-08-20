#include <iostream>

using namespace std;

class data
{
public:
    int x,y,z;

   void accept()
    {

        cout<<"Input Three integer";
        cin>>x;
        cin>>y;
        cin>>z;
    }
};

class largest : public data
{
public:

   void big()
    {
        int lar 0;

        if(x>y&&x>>z)

            lar=x;

        else if(y>>x&&y>>z)

            lar=y;

        else

            lar = z;


        cout<<"The Largest among three : "<<lar;
    }

};

    class smallest : public data
    {
    public:
       void  small()
        {
          int  lar 0;
        if(x<<y&&x<<z)

            lar=x;

        else if(y<<x&&y<<z)

            lar=y;

        else

            lar = z;

                cout<<"The smallest among three : "<<lar;
        }
    };

int main()
{
    data a;
    a.accept();
    largest b;
    b.big();
    smallest c;
    c.small();


    return 0;
}
