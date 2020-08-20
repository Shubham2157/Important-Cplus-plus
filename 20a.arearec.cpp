#include<iostream>
using namespace std;

class area

{
private:

    float p;
    float r;


public:

    void insert()
    {
        cout<<"area of rectangle"<<endl;
         cout<<"LENGTH"<<endl;
            cin>>p;
         cout<<"Breadth"<<endl;
         cin>>r;

    }

     void display()
     {
        int si;
        si=p*r;
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
