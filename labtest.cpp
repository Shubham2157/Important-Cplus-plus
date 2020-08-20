#include <iostream>
using namespace std;

class shape{
    public:
    double d1;
    double d2;

void get_data()
{
    cout<<"Enter the data ";
    cin>>d1>>d2;
}

virtual void display_area()
{

}

};

class rectangle : public shape{
   public:
 void display_area()
{

    double ar=d1*d2;
    cout<<"Area of the rectangle is : "<<ar;
}

};

class triangle :public shape{
   public:
   void display_area()
  {

       double ar=d1*d2*0.5;
       cout<<"Area of the triangle is : "<<ar;
  }

};




int main()
{
   rectangle rect;
   rect.get_data();
   triangle tri;
   tri.get_data();

   rect.display_area();
   tri.display_area();

    return 0;
}
