#include<iostream>
using namespace std;
class circle
{
    private:
    float radious;
    public:
    void getdta()
    {
        cout<<"enter the radius";
        cin>>radious;
    }
    void printdata()
    {
        cout<<"the area of circle is : "<<3.14*radious*radious<<endl;
        cout<<"the area of circupfrence : "<<2*3.14*radious<<endl;
    }
};
int main()
{
    class circle cl;
    cl.getdta();
    cl.printdata();
}