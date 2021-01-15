#include <iostream>

using namespace std;
// Friend only give permission to access data from class and the function is not the member of class 
class adding
{
public:
    int w; 
    int s;

    public:
    void setnumber(int x1,int x2)
    {
        w=x1;
        s=x2;
        
    }
    friend adding numbers(adding o1,adding o2);
    void printnumber()
    {
        cout<<"The complex number is "<<w<<" + "<<s<<"i"<<endl;
    }

};

adding numbers(adding o1, adding o2)
{
    adding o3;
    o3.setnumber((o1.w+o2.w),(o1.s+o2.s));
    return o3;
} 

int main()
{
  adding j1,j2,sum;
  j1.setnumber(4,7);
  j1.printnumber();

  j2.setnumber(8,4);
  j2.printnumber();

  sum=numbers(j1,j2);
  sum.printnumber();


}

/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/
