#include <iostream>

using namespace std;

class complex
{

    int a, b;

public:
    complex(int, int);

     void printnumber()
    {
        cout<<"The complex number are "<<a<<"+"<<b<<"i"<<endl;
    }
};    

    complex::complex(int x,int y)
    {
        a=x;
        b=y;
    }

    int main()
    {
        complex a(4,6);
        a.printnumber();

    }