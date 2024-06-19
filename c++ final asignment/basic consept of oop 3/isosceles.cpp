#include <iostream>
using namespace std;
class tringle
{
private:
    int side1, side2, side3;

public:
    void getdata()
    {
        cout<<"enter the tringle three side";cin>>side1>>side2>>side3;
    }
    void cdata()
    {
        if (side1 == side2 && side2 == side3)
        {
            cout << "this is equal to tringle" << endl;
        }
        else if (side1 == side3 || side1 == side2 || side2 == side3)
        {
            cout << "this is call isosceles";
        }
        else
        {
            cout << "this is call scale tringle";
        }
    }
};
int main()
{
   tringle tt;
   tt.getdata();
   tt.cdata();
}