#include <iostream>

using namespace std;

class Student
{
protected:
    int rollno;

public:
    void setroll_number(int a)
    {
        rollno = a;
    }
    void getroll_number()
    {
        cout << "The rollno. of student is " << rollno << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, english;

public:
    void set_marks(int c, int b)
    {
        maths = c;
        english = b;
    }
    void get_marks()
    {
        cout << "The marks in maths is " << maths << endl;
        cout << "The marks in english is " << english << endl;
    }
};
class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(int sc)
    {
        score = sc;
    }
    void get_score()
    {
        cout << "The score of student is " << score << endl;
    }
};
class Result : public Test, public Sports
{
private:
    float total;

public:
    void set_result()
    {
        total = maths + english + score;
    }

    void print_result(void)
    {
        getroll_number();
        get_marks();
        get_score();
        cout << "The total result is " << total << endl;
    }
};

int main()
{
    Result r;
    r.setroll_number(34);
    r.set_marks(67, 89);
    r.set_score(45);
    r.set_result();
    r.print_result();
}