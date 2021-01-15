#include<iostream>
using namespace std;

int main()
{
    int a=4,b=5;
    cout<<"Operators in c++"<<endl;
    //Arithmetic Oerators:

    cout<<"The Value of a+b is"<<a+b<<endl;
    cout<<"The Value of a*b is"<<a*b<<endl;
    cout<<"The Value of a/b is"<<a/b<<endl;
    cout<<"The Value of a%b is"<<a%b<<endl;
    cout<<"The Value of a++ is"<<a++<<endl;//print then increment
    cout<<"The Value of a-- is"<<a--<<endl;//print then decrement
    cout<<"The Value of ++a is"<<++a<<endl;//incremnt then print
    cout<<"The Value of --a is"<<--a<<endl<<endl;//decrement then print

    //Comparison OPerator:

     cout<<"The Value of a==b is"<<(a==b)<<endl;
     cout<<"The Value of a!=b is"<<(a!=b)<<endl;
     cout<<"The Value of a<=b is"<<(a<=b)<<endl;
     cout<<"The Value of a>=b is"<<(a>=b)<<endl;
     cout<<"The Value of a<b is"<<(a<b)<<endl;
     cout<<"The Value of a>b is"<<(a>b)<<endl<<endl;

     //Logical Operator:

      cout<<"The Value of and operator is"<<((a==b)&&(a<b))<<endl;
       cout<<"The Value of or operator is"<<((a==b)||(a<b))<<endl;
       cout<<"The Value of not operator is"<<(!(a==b))<<endl;


    return 0;
}