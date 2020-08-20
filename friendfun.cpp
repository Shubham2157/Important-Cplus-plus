#include<iostream>
using namespace std;

class demof
{
private:
    int a;
public:
    void input()
    {
        cout<<"enter the n0 ";
        cin>>a;
    }
    private:
    friend void show(demof);
};

    void show(demof f)
    {
        cout<<f.a;
    }

int main()
{
    demof f;
    f.input();
    show(f);
    return 0;
}
