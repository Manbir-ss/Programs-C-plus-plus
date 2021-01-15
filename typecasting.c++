#include<iostream>

using namespace std;

int c=56;

int main()
{

int a,b,c;

cout<<"Enter value of a: "<<endl;
cin>>a;

cout<<"Enter value of b: "<<endl;
cin>>b;

c=a+b;

cout<<"The value of c is"<<c<<endl;
cout<<"The global value of c is "<<::c;// "::" Scope resolution operator use to get value which is out of the function

return 0;

}