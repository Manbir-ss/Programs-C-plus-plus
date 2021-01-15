#include<iostream>

using namespace std;

int train(int x,int y)
{
    return(x==y)?(x+y)*3:(x+y);
}


int main()
{         
    cout<<"2,4"<<endl;
    cout<<"5,7"<<endl;
    cout<<"4,4"<<endl<<endl;
    cout<<train(2,4)<<endl;
    cout<<train(5,7)<<endl;
    cout<<train(4,4)<<endl;
     
}

