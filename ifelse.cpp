#include<iostream>

using namespace std;

int main()
{

 int age;

 cout<<"Enter your age ";
 cin>>age;

 if(age<18){
    cout<<"You cannot come";
 }

 else if(age==18){
    cout<<"You can come as a kid";
 }

 else {
     cout<<"Come inside";
 }

 return 0;

}
