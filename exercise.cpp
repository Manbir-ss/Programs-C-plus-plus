#include<iostream>

using namespace std;

class Calculator{
    float a;
    float b;
    public:
    void input(){
        cout<<"Enter value of A "<<endl;
        cin>>a;
        cout<<"Enter value of B "<<endl;
        cin>>b;
    }
    void process(){
        cout<<"Addition is "<<a+b<<endl;
        cout<<"Subtract is "<<a-b<<endl;
        cout<<"Multiiply is "<<a*b<<endl;
        cout<<"Divide is "<<a/b<<endl;
    }
};
int main()
{
    Calculator p;
    p.input();
    p.process();
}