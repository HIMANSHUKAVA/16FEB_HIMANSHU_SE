#include<iostream>
using namespace std;
class mnhop
{
  private:
  int a,b;
  public:
  void getdata();
  void printdata() const
  {
    cout<<"A"<<" "<<a<<endl <<"B"<<" "<<b<<endl;
  }
  friend void swap(mnhop &mm);
};
void mnhop :: getdata()
{
  cout<<"enter the number of a";
  cin>>a;
  cout<<"Enter the number of b";
  cin>>b;
}

void swap(mnhop &mm)
{
  mm.a = mm.a  - mm.b;
  mm.b = mm.a  + mm.b;
  mm.a = mm.b - mm.a;
}

int main()
{
    mnhop mm;
    cout<<"===========befor swaping================"<<endl;
    mm.getdata();
    mm.printdata();
    swap(mm);
    cout<<"============after swaping==============="<<endl;
    mm.printdata();
}

