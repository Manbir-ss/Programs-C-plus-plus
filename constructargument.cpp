#include <iostream>

using namespace std;

class pros
{
    int data1;
    int data2;

public:
    pros(int a, int b = 5)
    {
        data1 = a;
        data2 = b;
    }
    void printnumber();
};

void pros::printnumber()
{
    cout<<"The numbers are "<<data1<<" and "<<data2<<endl;
}

int main()
{
    pros k(5);
    k.printnumber();
}