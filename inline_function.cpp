#include<iostream>

using namespace std;

//Do not use inline with static

//Inline function;
/*inline plan(int a,int b)
{
     int c=5;

    c=c+1;

    return a*b+c;
}*/

//Static

inline plan(int a,int b)
{
    static int c=5;

    c=c+1;

    return a*b+c;
}

int main()
{
    int a=6,b=2;

    cout<<"THe value is"<<plan(a,b)<<endl;
    cout<<"THe value is"<<plan(a,b)<<endl;
    cout<<"THe value is"<<plan(a,b)<<endl;
    cout<<"THe value is"<<plan(a,b)<<endl;
    cout<<"THe value is"<<plan(a,b)<<endl;
    cout<<"THe value is"<<plan(a,b)<<endl;
    cout<<"THe value is"<<plan(a,b)<<endl;
    cout<<"THe value is"<<plan(a,b)<<endl;
    cout<<"THe value is"<<plan(a,b)<<endl;
    cout<<"THe value is"<<plan(a,b)<<endl;
    cout<<"THe value is"<<plan(a,b)<<endl;
    cout<<"THe value is"<<plan(a,b)<<endl;
    cout<<"THe value is"<<plan(a,b)<<endl;
    cout<<"THe value is"<<plan(a,b)<<endl;
    cout<<"THe value is"<<plan(a,b)<<endl;
    cout<<"THe value is"<<plan(a,b)<<endl;
    cout<<"THe value is"<<plan(a,b)<<endl;
    cout<<"THe value is"<<plan(a,b)<<endl;
    cout<<"THe value is"<<plan(a,b)<<endl;
    cout<<"THe value is"<<plan(a,b)<<endl;
    cout<<"THe value is"<<plan(a,b)<<endl;

}