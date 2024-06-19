#include <iostream>
using namespace std;
class c
{
public:
    int p(int a, int b)
    {
       return a+b;
    }
    float p(float a,float b)
    {
        return a+b;
    }
    int m(int a,int b)
    {
        return a-b;
    }
    float m(float a,float b)
    {
        return a-b;
    }
    int o(int a , int b)
    {
        return a*b;
    }
    float o(float a,float b)
    {
        return a*b;
    }
    int d(int a , int b)
    {
        return a/b;
    }
    float d(float a,float b)
    {
        return a/b;
    }

    

};
int main()
{
    int a, b ,e,f;
    char ch;
    cout << "enter the two number";
    cin >> a >>b;
    // cout<<"enter float amounr";
    // cin>>e>>f;
    c  a1,a2;
    cout<<"sum :"<<a1.p(a,b)<<endl;
    // cout<<""<<a2.p(e,f)<<endl;
    cout<<"minus is :"<<a1.m(a,b)<<endl;
    // cout<<""<<a2.m(e,f)<<endl;
    cout<<"multification : "<<a1.o(a,b)<<endl;
    cout<<"division is :"<<a1.d(a,b)<<endl;
  
}