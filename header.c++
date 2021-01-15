#include<iostream>
//Two types of header files
// 1. System header file: Comes with compiler
// 2. User defined Header file: Written by programmer
#include"this.h// this is a user defined header file work when you created a new file "this.h" name;
using namespace std;

int main()
{
    int a=4,b=5
    cout<<"Operators in c++"<<endl;
    //Arithmetic Oerators:

    cout<<"The Value of a+b is"<<a+b<<endl;
    cout<<"The Value of a*b is"<<a*b<<endl;
    cout<<"The Value of a/b is"<<a/b<<endl;
    cout<<"The Value of a%b is"<<a%b<<endl;
    cout<<"The Value of a++ is"<<a++<<endl;//print then increment
    cout<<"The Value of a-- is"<<a--<<endl;//print then decrement
    cout<<"The Value of ++a is"<<++a<<endl;//incremnt then print
    cout<<"The Value of --a is"<<--a<<endl;//decrement then print


    return 0;
}