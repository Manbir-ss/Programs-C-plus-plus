#include <iostream>

using namespace std;

class Student
{
protected:
    int rollno;

public:
    int rollnumber(int);
    void get_rollnumber(void);
};

int Student::rollnumber(int r)
{
    rollno = r;
}

void Student::get_rollnumber()
{
    cout << "The roll no. of the student is " << rollno << endl;
}

class Exam : public Student{
    protected:
    float maths;
    float english;

    public:
    void getmarks();
    void setmarks(float,float);
};
void Exam ::setmarks(float r,float f){
    maths=r;
    english=f;
} 

void Exam ::getmarks(){
    cout<<"The marks in English is "<<english<<endl;
    cout<<"The marks in Maths is "<<maths<<endl;
} 

class Result: public Exam{
    float avg;
    public:
    void Results();
}; 

void Result::Results(){
    get_rollnumber();
    getmarks();
    cout<<"The percentage is "<<maths+english/2<<endl;
}

  int main()
{
    Result obj;
    obj.rollnumber(1);
    obj.setmarks(78.5,65.9);
    obj.Results();


}