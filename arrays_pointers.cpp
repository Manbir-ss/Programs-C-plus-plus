#include<iostream>

using namespace std;

int main()
{
    int marks[6]={34,45,89,67,56,12};
    

   /* cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    marks[4]={69};
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    cout<<marks[5]<<endl;*/

    /*for (int i = 0; i <=6; i++)
    {
        cout<<"The value of "<<i<<" is "<<marks[i]<<endl;
    }*/

   
    //pointers and arrays
    
    int* p=marks;
     
    cout<<*(p++)<<endl;
    cout<<(*p)<<endl;


    cout<<"The address of"<<marks[0]<<" is "<<p<<endl;
    cout<<"The address of"<<marks[1]<<" is "<<p<<endl;
    cout<<"The address of"<<marks[2]<<" is "<<p<<endl;
    cout<<"The address of"<<marks[3]<<" is "<<p<<endl;
    cout<<"The address of"<<marks[4]<<" is "<<p<<endl;
    cout<<"The address of"<<marks[5]<<" is "<<p<<endl;

    

}
