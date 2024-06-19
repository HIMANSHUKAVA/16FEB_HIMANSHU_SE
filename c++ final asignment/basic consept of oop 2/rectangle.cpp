#include<iostream>
using namespace std;
class rectangle
{
   private:
   float length , width;
   public:
   void getdata()
   {
    cout<<"enter the rectangle hight";
    cin>>length;
    cout<<"enter the rectangle width";
    cin>>width;
   }
   void printdata()
   {
    cout<<"area of rectangle is"<<0.5*length*width<<endl;
    cout<<"area of peraiter is "<<2 * (length + width)<<endl;
   }
};
int main()
{
  class rectangle re;
  re.getdata();
  re.printdata();
}