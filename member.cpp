#include <iostream>

using namespace std;

class adding;

class add
{
public:
    int pro(int a, int b)
    {
        return (a + b);
    }
    int sumrealnumbers(adding, adding);
    int sumimaginumbers(adding, adding);
};

class adding
{
    int a;
    int b;
    friend class add;

public:
    void setnumber(int x1, int x2)
    {
        a = x1;
        b = x2;
    }
    void printnumber()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};
int add ::sumrealnumbers(adding o1, adding o2)
{
    return (o1.a + o2.a);
}

int add ::sumimaginumbers(adding o1, adding o2)
{
    return (o1.b + o2.b);
}
int main()
{
    adding j1, j2;
    j1.setnumber(7, 6);
    j2.setnumber(8, 4);
    add k;
    k.sumrealnumbers(j1, j2);
}