#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

int a=45,n=5745,k=67453;

cout<<"The value of a is "<<a<<endl;
cout<<"The value of n is "<<n<<endl;
cout<<"The value of k is "<<k<<endl<<endl;

//using setw


cout<<"The value of a is"<<setw(6)<<a<<endl;
cout<<"The value of n is"<<setw(6)<<n<<endl;
cout<<"The value of k is"<<setw(6)<<k<<endl;

return 0;

}


// The manipulators gives the number of space to the keywords