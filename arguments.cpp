#include<iostream>

using namespace std;

// here j=1.5 is a defult argument and it can be change able 

float promo(int a,float j=1.5)
{
    return a*j;
}

int main()
{
    int a=5,j=6;

    cout<<promo(a,j)<<endl;
    cout<<a;
}