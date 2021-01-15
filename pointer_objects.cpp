#include <iostream>

using namespace std;

class complex
{
    int pro, fro;

public:
    void set_data(int a, int b)
    {
        pro = a;
        fro = b;
    }

    void getdata()
    {
        cout << "The value of pro is " << pro << endl;
        cout << "The value of fro is " << fro << endl;
    }
};

int main()
{
    //complex yu;
    //complex *tu = &yu;
    complex *tu=new complex;
    (*tu).set_data(4, 8);
    (*tu).getdata();
    //Arrow operator use to run function inside the oject
    tu->getdata();
}