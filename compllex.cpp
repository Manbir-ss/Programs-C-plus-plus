#include <iostream>

using namespace std;

class complex
{
    int x;
    int y;

public:
    void setdata(int v1, int v2)
    {
        x = v1;
        y = v2;
    }
    void setdatabysum(complex e1, complex e2)
    {
        x = e1.x + e2.x;
        y = e1.y + e2.y;
    }
    void printnumber()
    {
        cout<<"The value is "<<x<<" + "<<y<<"i"<<endl;
    }
};

int main()
{
    complex c1,c2,c3;
    c1.setdata(3,4);
    c1.printnumber();

    c2.setdata(5,4);
    c2.printnumber(); 

    c3.setdatabysum(c1,c2);
    c3.printnumber();
}