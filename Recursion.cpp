#include<iostream>

using namespace std;

/*factorial(int a)
{
    if(a<=1){
        return 1;
    }
    else{
        return a*factorial(a-1);
    }
    
}*/

fibonnaciseries(int a)
{
    if(a<2){
        return 1;
    }
    return fibonnaciseries(a-2)+fibonnaciseries(a-1);
}

int main()
{
    int a;
    cout<<"Enter the value ";
    cin>>a;

    cout<<endl<<"At this position  is "<<a<<" is "<<fibonnaciseries(a);


}