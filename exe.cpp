#include<iostream>

using namespace std;

class Calculator
{
    
float ans;
    
public:
    void add(int a,int b){
         ans=a+b;
    }

    void display(){
        cout<<"The addition of number is "<<ans<<endl; 
    }

};


int main(){
    Calculator obj;
    obj.add(3,5);
    obj.display();

}