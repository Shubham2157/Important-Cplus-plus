#include <iostream>
using namespace std;

class Parent1
{
    public:
      int id_p1;
};


class Parent2 : public Parent1
{
    public:
      int id_p2;
};
class Parent3 : public Parent2
{
    public:
      int id_p3;
};


int main()
   {

        Parent3 obj1;

        obj1.id_p1 = 7;
        obj1.id_p2 = 50;
        obj1.id_p3 = 91;
        cout << "Parent1 id is " <<  obj1.id_p1 << endl;
        cout << "Parent2 id is " <<  obj1.id_p2 << endl;
         cout << "Parent3 id is " <<  obj1.id_p3 << endl;
        return 0;
   }
