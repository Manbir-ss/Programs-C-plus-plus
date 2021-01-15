#include <iostream>

using namespace std;

class Shop_items
{
    int no;
    float price;

public:
    void setdata(int a, float b)
    {
        no = a;
        price = b;
    }
    void getdata()
    {
        cout << " Id of the Item is " << no << endl;
        cout << " Price of the item is " << price << endl;
    }
};

int main()
{
    int size = 3;

    Shop_items *ptr = new Shop_items[size];
    Shop_items *tempptr = ptr;
    int j, s, i;
    float m;

    for (i = 0; i < size; i++)
    {
        cout << " Enter the id and price of the product " << i + 1 << endl;
        cin >> j >> m;

        ptr->setdata(j, m);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout << "Enter the number of items" << i + 1 << endl;
        cin >> j;

        tempptr->getdata();
        tempptr++;
    }
}