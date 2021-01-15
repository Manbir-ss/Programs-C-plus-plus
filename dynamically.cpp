#include <iostream>

using namespace std;

class Bankdeposit
{
    int time;
    float interestrate;
    int amount;
    float returnamount;

public:
    Bankdeposit(){}
    Bankdeposit(int t, int a, float r);
    Bankdeposit(int t, int a, int r);
    void print();
};

Bankdeposit :: Bankdeposit(int t, int a, float r)
{
    amount = a;
    time = t;
    interestrate = r;
    returnamount = amount;

    for (int i = 0; i < t; i++)
    {
        returnamount = returnamount * (1 + r);
    }
};
Bankdeposit :: Bankdeposit(int t, int a, int r)
{
    amount = a;
    time = t;
    interestrate = float(r) / 100;
    returnamount = amount;

    for (int i = 0; i < t; i++)
    {
        returnamount = returnamount * (1 + r);
    }
};
void Bankdeposit::print()
{
    cout << "The Given Amount" << amount << endl
         << "Time taken " << time << endl
         << "Interest you get " << returnamount << endl;
}

int main()
{
    Bankdeposit b1, b2, b3;

    int a;
    int t;
    float r;
    int R;

    cout << "Enter the value of a t r" << endl;
    cin >> a >> t >> r;

    b1 = Bankdeposit(a, t, r);
    b1.print();
}