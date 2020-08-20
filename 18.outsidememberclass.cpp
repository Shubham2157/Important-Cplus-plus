#include<iostream>
using namespace std;

class student_data

{
private:

    char name[40];
    int rollno;
    char section;
    int marks;

public:

    void insert();
     void display();
};
int main()
{
    student_data s1;

    s1.insert();
    s1.display();

    return 0;
}

    void student_data :: insert()
    {
        cout<<"enter the data of student"<<endl;
         cout<<"enter the name of student"<<endl;


            cin>>name;

         cout<<"enter the roll_no of student"<<endl;
         cin>>rollno;

          cout<<"enter the section of student"<<endl;
          cin>>section;

           cout<<"enter the marks of student"<<endl;
           cin>>marks;
    }

  void student_data :: display()
     {


          cout<<"name -: "<<name<<endl;


      cout<<"roll no -: "<<rollno<<endl;

      cout<<"section -: "<<section<<endl;

      cout<<"marks -: "<<marks<<endl;
     }

