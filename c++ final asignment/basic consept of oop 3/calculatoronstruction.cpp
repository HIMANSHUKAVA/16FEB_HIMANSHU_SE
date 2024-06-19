#include <iostream>
using namespace std;
class calculator
{
public:
    int a, b;
    calculator(int x, int y) : a(x), b(y)
    {
    }
    void printdata()
    {
        cout << "the sum is" << " " << a + b << endl;
        cout << "the multification is " << " " << a * b << endl;
        cout << "the minus is" << " " << a - b << endl;
        cout << "the divided of two number is " << " " << a / b << endl;
    }
};
int main()
{
    int a, b;
    cout << "enter the number of a";
    cin >> a;
    cout << "enter the number of b";
    cin >> b;
    calculator cp(a, b);
    cp.printdata();
}