#include<iostream>

using namespace std;

int addition(int a,int b)
{
    return (a+b);
}

int multiply(int a,int b)
{
    return(a*b);
}
int volume(int a)
{
    return (a*a*a);
}
float cylinder(int r,int h)
{
    return(22/7*r*r*h);
}

int main()
{
    int a=4,b=5,r=7,h=8;
    cout<<"By addition "<<addition(a,b)<<endl<<endl;
    cout<<"By multiply "<<multiply(a,b)<<endl<<endl;
    cout<<"By volume "<<volume(a)<<endl<<endl;
    cout<<"By cylinder "<<cylinder(r,h)<<endl<<endl;

}