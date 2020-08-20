#include<iostream>
using namespace std;

class area
{
private:
   float r;

public:
    void insert()
    {
         cout<<"Enter radius"<<endl;
         cin>>r;
     }

     void display()
     {
        float si;
        si=3.14*r*r;

        cout<<"the area -: "<<si;

     }
};

int main()
{
    area s1;

    s1.insert();
    s1.display();

    return 0;
}
