/*Extend the program ii. of inheritance to include a class sports, which
stores the marks in sports activity. Derive the result class from the classes ‘test’
and ‘sports’. Create objects using parameterized constructors .Calculate the
total marks and percentage of a student.*/
#include<iostream>
using namespace std;

class student
{
    protected:
    char name[20];
    int roll;
    public:
    void getdata()
    {
        cout << "Enter Roll No. and Name: " << endl;
        cin >> roll >> name;
    }

};

class test : public virtual student
{
    protected:
    int sub1;
    int sub2;
    int sub3;
    int sub4;
int sub5;


    public:
    void getmark()
    {
        cout << "Enter marks in 5 subjects : " << endl;
        cin >> sub1 >> sub2>> sub3 >> sub4 >> sub5;
    }
    void details()
    {
        cout << "\n\nName: " << name << "\nRoll number: " << roll << endl;
        cout << "Marks in 5 subjects: " << sub1 << ", " << sub2 << ", " << sub3 << ", " << sub4 << ", " << sub5 << endl;
    }
};

class sports : public virtual student
{
    protected:
    int msports;
    public:
        void getspo()
        {
            cout << "Enter marks in sports: ";
            cin >> msports;

        }
};

class result : public sports, public test
{
    int total;
    float percent;
    public:
    void display()
    {
        cout << "Marks in sports= " << msports << endl;
        total = sub1+sub2+sub3+sub4+sub5+msports;
        percent = (total*100)/600;
        cout << "Total marks: " << total << "\nPercent= " << percent << "%"<<endl;
    }
};

int main()
{
    result ob1;
    ob1.getdata();
    ob1.getmark();
    ob1.getspo();
    ob1.details();
    ob1.display();
}