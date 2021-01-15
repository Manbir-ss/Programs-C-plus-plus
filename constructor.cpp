#include <iostream>

using namespace std;

// It is a special function with same name as class name
// It is use to initialize to use objects of class
// It is automatically invoked whenever object is created

class complex
{
    int x, y;

public:
    complex(void); //Declaration of constructor

    void printnumber(void)
    {
        cout << "The values of given numbers " << x << " + " << y << "i" << endl;
    }
};

complex ::complex(void)
{
    x = 5;
    y = 6;
}

int main()
{
    complex c;
    c.printnumber();
}

//Charectristics of constructors

/* 1.It should be declared in the public section of class
   2.They are automaticallly invoked when object is created
   3.They do not return values and do not have return types
   4.It can have default arguments
   5.We cannot refer to their address
*/
 
