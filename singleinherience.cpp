#include <iostream>

using namespace std;

class Base
{
    int data1;
public:
    int data2;
    void setdata(void);
    int getdata1();
    int getdata2();
};

void Base::setdata(void)
{
    data1 = 45;
    data2 = 56;
}

int Base::getdata1()
{
    return data1;
}

int Base ::getdata2()
{
    return data2;
}

class Derived : public Base
{
    int data3;
    public:
    int process();
    void show();
};

int Derived ::process()
{
    data3 = data2 * getdata1();
}

void Derived ::show()
{
    cout << "The data 1 is " << getdata1() << endl;
    cout << "The data 2 is " << data2 << endl;
    cout << "The data 3 is " << data3 << endl;
}

int main()
{
    Derived o1;
    o1.setdata();
    o1.process();
    o1.show();
}