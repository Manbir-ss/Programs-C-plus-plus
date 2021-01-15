#include<iostream>

using namespace std;

int main()
{
    int age;

cout<<"Enter your age ";
cin>>age;

switch(age){

    case 12:
    cout<<"You are not able";
    break;

    case 23:
    cout<<"You are able";
    break;

    case 18:
    cout<<"Point to be noted";
    break;

    default:
    cout<<"No special cases";
    break;

    return 0;
}


}