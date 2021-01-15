#include<iostream>

using namespace std;

/*int swap(int* a,int* b)
{
    int c=*a;
    *a=*b;
    *b=c;

    
}*/

int &swapRefrence(int &a,int &b)
{
    int c=a;
    a=b;
    b=c;

    return b;

    
}

int main()
{
    int x=5,i=4;

    cout<<"The value of x is "<<x<<endl;
    cout<<"The value of i is "<<i<<endl<<endl;

    swapRefrence(x,i)=567;
    cout<<"The value of x is "<<x<<endl;
    cout<<"The value of i is "<<i<<endl;
    return 0;
}
