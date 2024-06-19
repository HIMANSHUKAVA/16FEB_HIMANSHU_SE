#include <iostream>
using namespace std;
class calculator
{
public:
    int a, b;
    void getdata()
    {
        cout << "please enter the number of a ";
        cin >> a;
        cout << "enter the number of b :";
        cin >> b;
    }
    void printdata()
    {
        cout << "the sum of two number is : " << a + b << endl;
        cout << "the division of two number is : " << a - b << endl;
        cout << "the multification of two number is :" << a * b << endl;
        cout << "the divided of two number is : " << a / b << endl;
    }
};
int main()
{
    class calculator ct;
    ct.getdata();
    ct.printdata();
}
