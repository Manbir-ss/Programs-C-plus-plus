#include<iostream>

using namespace std;
/* Derive class syntax 

class {{Derived :: class name}} : {{Visibility-mode}} {{base-class-name}}
{
    methods/names/etc....
}
*/

class Employee 
{
public:
    int id;
    float salary;
    Employee(int input){
        id=input;
        salary=56000;
    }
    Employee(){};
    
};
// Creatiing programmer class by using Employee base class;
class Programmer : public Employee{
    public:
        int language;
        Programmer(int input){

        id=input;
         language=9;
        }
        void getid()
        {
            cout<<"The id of person is "<<id<<endl;
        }

};
//note:
//Private visibility mode:in private visibility mode the public  members of base class becomes private;
//public visibility mode:in public visibility mode the members of base class becomes public;
//but it does not effect private data  in base class;

int main()
    {
        Employee a(1),b(2);
        cout<<a.salary<<endl;
        cout<<b.salary<<endl;

        Programmer skillF(34);
        cout<<skillF.language<<endl;
        cout<<skillF.id<<endl;
        skillF.getid();
        
    }
