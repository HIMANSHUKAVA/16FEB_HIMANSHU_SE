#include<iostream>
using namespace std;
class spo
{
public:
   spo()
   {
    cout<<"perent class called"<<endl;
   }
};
class nm : public spo
{
public:
   nm()
   {
      cout<<"child class called"<<endl;
   }
};
class cpo : public nm
{
    public:
    cpo()
    {
        cout<<"child class called"<<endl;
    }
};
int main()
{
    cpo p;
}
