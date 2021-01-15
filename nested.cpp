#include<iostream>
#include<string>

using namespace std;

class binary
{
    string s;
public:
    void read(void);
    void check_bin(void);
    void ones_compliment(void);
    void display(void);

};

void binary :: read(void)

{
    cout<<"Enter the number"<<endl;
    cin>>s;
}

void binary :: check_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {

       if (s.at(i)!='1' && s.at(i)!='0')
        {
            cout<<"Not a binary number";

        }
    }
    

}
void binary :: ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {

      if(s.at(i) =='0')
     {
        s.at(i)='1';
     }
      else
     {
        s.at(i)='0';
     }

    }
}

void binary ::  display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
    cout<<s.at(i);
    }
}


int main()
{

binary s;
s.read();
s.check_bin();
s.ones_compliment();
s.display();
return 0;


}