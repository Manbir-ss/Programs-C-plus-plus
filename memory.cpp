#include <iostream>

using namespace std;

class Dukaan
{

    int id[50];
    int product[50];
    int counter;

public:
    void counting(void) {counter = 0;}
    void setprice(void);
    void displaying(void);
};

void Dukaan::setprice(void)
{
     
    
    cout<<endl<<"Enter the price id Product ";
    cin>>id[counter];

    cout<<endl<<"Enter the price of product";
    cin>>product[counter];

    counter++;
    
    
}

void Dukaan::displaying(void)
{
    for (int i = 0; i < counter ; i++)
    {
        cout<<"Id of product "<<id[i]<<endl<<"Price of product "<<product[i]<<endl;
    }

}

int main()
{
    Dukaan j;
    j.counting();
    j.setprice();
    j.setprice();
    j.setprice();
    j.setprice();
    j.displaying();
    
    return 0;
}