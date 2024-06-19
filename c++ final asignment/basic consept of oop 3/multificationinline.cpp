#include<iostream>
using namespace std;
inline int mul(int a,int b)
{
    return a*b;
}
inline cube(int x)
{
    return x*x*x;
}
int main()
{
    int a,b,x;
    cout<<"enter the number of a";
    cin>>a;
    cout<<"enter the number of b";
    cin>>b;
    cout<<"the multification is "<<mul(a,b)<<endl;
    cout<<"enter the numer of cube ";
    cin>>x;
    cout<<"the number of cube is :"<<cube(x)<<endl;
    return 0;
    
}