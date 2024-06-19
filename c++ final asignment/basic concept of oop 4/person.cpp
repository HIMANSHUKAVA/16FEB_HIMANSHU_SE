#include <iostream>
using namespace std;
class person
{
public:
    string name;
    int age;
    void getdata1()
    {
        cout << "enter the person name";
        cin >> name;
        cout << "enter the person age";
        cin >> age;
    }
};
class student : public person
{
public:
    float total_marks;
    void getdata2()
    {
        cout << "enter the student marks";
        cin >> total_marks;
        // cout<<"your percentage is"<<total_marks/7<<endl;
    }
};
class payment : public student
{
public:
    int salary;
    void getdata3()
    {
        cout << "please enter the salary";
        cin >> salary;
        //   cout<<"your average salary is"<<salary/12<<endl;
    }
};
class printdata : public payment
{
public:
    void getdata4()
    {
        cout << endl
             << "=========print detail=========" << endl;
        cout << "your name is" << " " << name << endl;
        cout << "your age is" << " " << age << endl;
        cout << "your total mark is" << " " << total_marks << endl;
        cout << "your percetange is" << " " << total_marks / 7 << endl;
        cout << "your salary is " << " " << salary << endl;
        cout << "your average salary is" << " " << salary / 12 << endl;
        cout << endl
             << "=========thank you==========" << endl;
    }
};
int main()
{
    printdata pt;
    pt.getdata1();
    pt.getdata2();
    pt.getdata3();
    pt.getdata4();
    return 0;
}