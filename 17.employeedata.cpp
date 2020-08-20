#include<iostream>
using namespace std;

class emp_data

{
private:

    char name[40];
    int eid;
    int salary;

public:

    void insert()
    {
        cout<<"enter the data of employ ****"<<endl;
         cout<<"enter the name of employ"<<endl;
            cin>>name;
         cout<<"enter the empid of employ"<<endl;
         cin>>eid;
           cout<<"enter the salary of employ"<<endl;
           cin>>salary;
    }
     void display()
     {
     cout<<"name -: "<<name<<endl;
      cout<<"Emp id -: "<<eid<<endl;
      cout<<"salary -: "<<salary<<endl;
     }


};

int main()
{
    emp_data e1,e2;
    e1.insert();
    e1.display();
    e2.insert();
    e2.display();

    return 0;
}
