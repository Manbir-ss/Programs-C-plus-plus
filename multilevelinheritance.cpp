#include<iostream>

using namespace std;

class Base1{
    protected:
    int baseline1;

    public:
    void setnumber1(int r)
    {
        baseline1=r;

    }

};
class Base2{
    protected:
    int baseline2;

    public:
    void setnumber2(int r){
        baseline2=r;

    }

};

class derive :public Base1,public Base2{
    public:
    void display(){
    cout<<"The base line 1 is "<<baseline1<<endl;
    cout<<"The base line 2 is "<<baseline2<<endl;
    cout<<"The sum of base line 1 & 2 is "<<baseline1+baseline2<<endl;
    }
};

int main()
{
    derive obj;
    obj.setnumber1(34);
    obj.setnumber2(56);
    obj.display();

}