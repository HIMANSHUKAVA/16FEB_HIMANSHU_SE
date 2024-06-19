#include<iostream>
using namespace std;
class mnop
{
    private:
    int a,b;
    public:
    void getdata()
    {
        cout<<"enter the number of a";
        cin>>a;
        cout<<"enter the number of b";
        cin>>b;
    }
    friend int max(mnop &s);
};
 int max(mnop &s)
{
    if(s.a > s.b) return s.a;
    else return s.b;
}
int main()
{
    mnop s;
    s.getdata();
    cout<<"max number is"<<" "<<max(s)<<endl;
    return 0;
}