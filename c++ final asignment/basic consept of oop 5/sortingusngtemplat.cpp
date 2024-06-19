#include<iostream>
using namespace std;
template <typename t>
t sort(t a[5])
{
    t i;
    t temp;
    cout<<"==========numbers========"<<endl;
    cout<<"enter element";
    for(i=0;i<5;i++)
    {
        cin >>a[i];
    }
    for(i=0;i<5;i++)
    {
        for(int j = i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
             temp = a[j];
             a[j] = a[i];
             a[i] = temp;
            }
        }
    }
    cout<<"==============sort numbers================="<<endl;
     for(i=0;i<5;i++)
    {
       cout<<a[i]<<endl;
    }
}
int main()
{
    int a[5];
    sort(a);
}