#include<iostream>

using namespace std;

class B;

class A
{
 int data;
public:
    void setValue(int value)
    {
      data=value;  
    }
    friend void addition(A,B);
};

class B 
{
   int num;
public:
    void setValue(int value)
    {
      num=value;  
    }
    friend void addition(A,B);
};

void addition(A o1,B o2){
       cout<<"Additing two numbers "<<o1.data+o2.num<<endl;
}

int main()
{
    A p;
    p.setValue(4);
    B j;
    j.setValue(7);
    addition(p,j);   
}