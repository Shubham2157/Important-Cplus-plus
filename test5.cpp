#include <iostream>
using namespace std;
class Sample
{
int a;
public:
void set_data(int b){
a=b;
}
void display()
{
cout<<a<<"\n";
}
};
int main()
{
Sample *s;
s->set_data(10);
s->display();
return 0;
}
