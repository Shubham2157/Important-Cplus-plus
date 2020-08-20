#include<iostream>
using namespace std;

class area

{
private:

    float p;

public:

    void insert()
    {

         cout<<"Enter SIDE"<<endl;
            cin>>p;

    }
     void display()
     {
        int si;
        si=p*p;
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
