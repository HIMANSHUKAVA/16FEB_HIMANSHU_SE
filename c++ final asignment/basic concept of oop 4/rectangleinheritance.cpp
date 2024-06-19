#include <iostream>
using namespace std;
class rectangle
{
public:
    double length;
    double breadth;

    void getdata()
    {
        cout<<"enter the rectangle hight";
        cin>>length;
        cout<<"enter the rectangle breadth";
        cin>>breadth;
    }
};
class rc:public rectangle
{
    public:
    void printdata()
    {
        cout<<"area of tringle is "<<" "<<length * breadth<<endl;
    }
 
};
int main()
{
    rc n;
    n.getdata();
    n.printdata();
    return 0;
}