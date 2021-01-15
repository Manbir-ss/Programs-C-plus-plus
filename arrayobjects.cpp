#include <iostream>

using namespace std;

class worker
{
    int id;
    int salary;

public:
    void setid();
    void getid();
};

void worker ::setid()
{
    cout << "Enter the worker id ";
    cin >> id;
}

void worker ::getid()
{
    cout << "The id of this employee is " << id << endl;
}

int main()
{
    worker hola[5]; 
    for (int i = 0; i < 5; i++)
    {
        hola[i].setid();
        hola[i].getid();
    }
}
