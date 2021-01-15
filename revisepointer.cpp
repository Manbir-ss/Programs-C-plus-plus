#include<iostream>

using namespace std;

int main()
{
    int a=5;
    int*rt=&a;

    cout<<"The value address is "<<*(rt)<<endl;

    //new kewordcout

    int *er= new int(34);
    float *fr=new float(56.9);

    cout<<"The value of er is "<<*er<<endl;
    cout<<"The value of fr is "<<*fr<<endl;

    //new keyword array

    /*int *qw=new int[6];
    qw[2]=45;
    qw[3]=56;
    qw[4]=78;
    qw[5]=25;
    qw[1]=465;
    qw[0]=89;

    cout<<"The value of qw[2] is "<<qw[0]<<endl;
    cout<<"The value of qw[3] is "<<qw[4]<<endl;
    cout<<"The value of qw[4] is "<<qw[3]<<endl;
    cout<<"The value of qw[6] is "<<qw[5]<<endl;
    cout<<"The value of qw[0] is "<<qw[1]<<endl;
    cout<<"The value of qw[0] is "<<qw[0]<<endl;
    cout<<"The value of qw[0] is "<<qw[2]<<endl;*/

    //delete operator use to free memory 

     int *qw=new int[6];
    qw[2]=45;
    qw[3]=56;
    qw[4]=78;
    qw[5]=25;
    qw[1]=465;
    qw[0]=89;
    delete [] qw;
    cout<<"The value of qw[2] is "<<qw[0]<<endl;
    cout<<"The value of qw[3] is "<<qw[4]<<endl;
    cout<<"The value of qw[4] is "<<qw[3]<<endl;
    cout<<"The value of qw[6] is "<<qw[5]<<endl;
    cout<<"The value of qw[0] is "<<qw[1]<<endl;
    cout<<"The value of qw[0] is "<<qw[0]<<endl;
    cout<<"The value of qw[0] is "<<qw[2]<<endl;


    
}