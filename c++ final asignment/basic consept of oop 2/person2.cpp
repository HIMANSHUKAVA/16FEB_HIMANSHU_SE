#include<iostream>
using namespace std;
class spo
{
    private:
    string name;
    int age;
    string country;
    public:
    void getdata();
    void printdata();
};
void spo ::getdata()
{
    cout<<"==================please enter the  following detail============"<<endl;
    cout<<"enter the name";
    cin>>name;
    cout<<"enter the age";
    cin>>age;
    cout<<"enter the country";
    cin>>country;
}
void spo::printdata()
{
    cout<<"========ans========="<<endl;
    cout<<"name is"<<" "<<name<<endl;
    cout<<"age is"<<" "<<age<<endl;
    cout<<"country is"<<" "<<country<<endl;
}
int main()
{
    spo ss;
    ss.getdata();
    ss.printdata();
}
