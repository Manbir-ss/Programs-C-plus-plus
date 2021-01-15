//we dont need typedef in classes
#include<iostream>
using namespace std;

class employee
{
private:
    int a,b,c;
public:
     int d,e;
    void setii(int a1,int b1,int c1);
    void get()
    {
    cout<<"The value of a "<<a<<endl;
    cout<<"The value of b "<<b<<endl;
    cout<<"The value of c "<<c<<endl;
    cout<<"The value of d "<<d<<endl;
    cout<<"The value of e "<<e<<endl;
    }
};

void employee::setii(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;
}



int main()
{
    employee harry;
    harry.d=1;
    harry.e=6;
    harry.setii(3,5,8);
    harry.get();
}