#include<iostream>

using namespace std;

class nummmber 
{
    int a;
public:
    nummmber(){
        a=7;
    };
    nummmber(int num){
        a=num;
    }

    nummmber(nummmber &object){
        cout<<"Copy paste "<<endl;
        a=object.a;
    }

    void display(){
        cout<<"The number you enterd is "<<a<<endl; 
    }
};



int main()
{
    nummmber a(3),s(4),d;
    a.display();
    nummmber a1(s);
    a1.display();


}

//When no copy constructor found ,compiler supplies own copy constructor