#include<iostream>

using namespace std;

class Base1{
    int data1;
    public:
    
     Base1(int a){
        data1=a;
        cout<<"Base1 value called"<<endl;
        }
    void print_Base1(){
        cout<<"The value is "<<data1<<endl;
    }
};
class Base2{
    int data2;
    public:
    
    Base2(int b){
        data2=b;
        cout<<"Base2 value called"<<endl;
        }
    void print_Base2(){
        cout<<"The value is "<<data2<<endl;
    }
};

class Derive : public Base1,public Base2{
    int d1,d2;
    public:

    Derive(int a,int b,int g,int j):Base1(a),Base2(b){
        d1=g;
        d2=j;
   
        
    }
     void print_derive(){
        cout<<"The value of derive 1"<<d1<<endl;
        cout<<"The value of derive 1"<<d2<<endl;
    }
};


int main()
{
    Derive player(1,7,9,6);
    player.print_derive();
    player.print_Base1();
}