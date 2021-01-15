#include<iostream>

using namespace std;
//Function prototype
int sum(int r,int y);
void g();
int main()
{
    int a,b;

    cout<<"Enter the first number ";
    cin>>a;
    cout<<endl<<"Enter the second number ";
    cin>>b;
    //a,b Actual parameters and r,y are formal parameters
    cout<<"The answer is "<<sum(a,b)<<endl;
    g();
}

int sum(int r,int y)
{
    int c;

    c=r*y;

    return c;

}

void g()
{
    cout<<"PRocess complete";
}