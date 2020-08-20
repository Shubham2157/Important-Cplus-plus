#include<iostream>
using namespace std;

class Simint

{
private:

    float p;
    float r;
    float t;

public:

    void insert()
    {
        cout<<"calc si"<<endl;
         cout<<"principal"<<endl;


            cin>>p;

         cout<<"RATE"<<endl;
         cin>>r;

          cout<<"TIME"<<endl;
          cin>>t;

    }



     void display()
     {
        int si;
        si=(p*r*t)/100;

        cout<<"the Simple interest -: "<<si;

     }


};

int main()
{
    Simint s1;

    s1.insert();
    s1.display();

    return 0;
}
