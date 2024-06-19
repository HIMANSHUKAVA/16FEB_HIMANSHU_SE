#include<iostream>
using namespace std;
class area
{
    private:
    int circle;
    float rectangle;
    float tringle;
    public:
    int ct(int r)
    {
        circle = 3.14*r*r;
        return circle;
    }
    int ct(int length, int breadth)
    {
        rectangle = length * breadth;
        return rectangle;
    }
    int ct(int base , int hight,float p)
    {
         tringle = p * base * hight;
    }
    void printdata()
    {
        cout<<"==============ans=================="<<endl;
        cout<<"area of circle is"<<" "<<circle<<endl;
        cout<<"area of rectanngle is"<<" "<<rectangle<<endl;
        cout<<"area of tringle"<<" "<<tringle<<endl;
        cout<<"===========thank you================="<<endl;
    }
};
int main()
{
    int r , length , breadth , base , hight;
    cout<<"==============welcome============="<<endl;
    cout<<"enter the radius";
    cin>>r;
    cout<<"enter the length";
    cin>>length;
    cout<<"enter the breadth";
    cin>>breadth;
    cout<<"enter the base";
    cin>>base;
    cout<<"enter the hight";
    cin>>hight;
    area a1;
    a1.ct(r);
    a1.ct(length,breadth);
    a1.ct(base , hight , 0.5);
    a1.printdata();

}