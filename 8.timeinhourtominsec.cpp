#include <iostream>
using namespace std;

void ConvertHours(int n)
{
    long long int minutes, seconds;

    minutes = n * 60;
    seconds = n * 3600;

    cout << "Minutes = " << minutes
         << ", Seconds = " << seconds << endl;
}

int main()
{
    int n;
    cout<<"enter the time in hour :";
    cin>>n;
    ConvertHours(n);
    return 0;
}
