#include<iostream>

using namespace std;

class complex
{
public:
    int a,b;
    complex(int x,int k){
        a=x;
        b=k;
    }
    complex(int x){
        a=x;
        b=5;
    }
    void printnuber(){
        cout<<"Print the number "<<a<<" + "<<b<<"i"<<endl;
    }
    
};


int main()
{
    complex j(4);
    j.printnuber();

    complex j2(5,6);
    j2.printnuber();

}