#include<iostream>

using namespace std;

int main()
{
    //pointers

    int a=4;
    int* f=&a;

    //When you want to see address

    cout<<"The address is "<<&a<<endl;
    cout<<"The address is "<<f<<endl<<endl;

    //When you want to see value inside address

    cout<<"The value is"<<a<<endl;
    cout<<"THe value is"<<*f<<endl<<endl;

    //When you want to store address of a pointer

    int** c=&f;

    cout<<"The address is "<<&f<<endl;
    cout<<"The address is "<<c<<endl<<endl;
    cout<<"The value at address c "<<*c<<endl;
    cout<<"The value at address value at(value at(c)"<<**c<<endl;
    

}