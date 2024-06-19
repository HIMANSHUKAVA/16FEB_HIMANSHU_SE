#include<iostream>
using namespace std;
template <typename ss>
ss swaping(ss a ,ss b)
{
     a = a-b;
     b = a+b;
     a = b-a;
    cout<<"A"<<" "<<a<<endl;
    cout<<"B"<<" "<<b<<endl;
}
int main()
{
  int x,y;
  cout<<"==========befor swaping========="<<endl;
  cout<<"enter the x :";cin>>x;
  cout<<"enter the y :";cin>>y;
  cout<<"===============after swaping============="<<endl;
  swaping(x,y);
  return 0;

}