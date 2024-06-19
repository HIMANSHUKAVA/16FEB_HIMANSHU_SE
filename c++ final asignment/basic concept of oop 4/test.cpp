#include <iostream>
using namespace std;
class s
{
public:
    int roll;
    string name;
    void cdata()
    {
        cout << "name is" << name << endl;
        cout << "roll number is" << " " << roll << endl;
    }
};
class mark
{
public:
    int sub1, sub2;
    void mdata()
    {
        cout << "sub 1 marks is" << sub1 << endl;
        cout << "sub 2 marks is" << sub2 << endl;
    }
};
class average : public s, public mark
{
public:
    void getdata()
    {
        cout << "enter the name";
        cin >> name;
        cout << "enter the roll";
        cin >> roll;
        cout << "enter sub 1 mark";
        cin >> sub1;
        cout << "enter sub 2 mark";
        cin >> sub2;
    }
    void pdata()
    {
        cdata();
        mdata();
        cout << "total mark is" << sub1 + sub2 << endl;
    }
};
int main()
{
    average ab;
    ab.getdata();
    ab.pdata();

}