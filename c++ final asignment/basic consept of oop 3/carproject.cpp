#include<iostream>
using namespace std;
class car
{
    private:
    string model,company;
    int year;
    public:
    void getdata()
    {
        cout<<"enter the company nme"; cin>>company;
        cout<<"enter the model name";cin>>model;
        cout<<"enter the model year";cin>>year;
    }
    void printdata()
    {
        cout<<"company name is "<<" "<<company<<endl;
        cout<<"model name is"<<" "<<<model<<endl;
        cout<<"model year"<<" "<<year<<endl;
    }
};
int main()
{
    car ct;
    ct.getdata();
    ct.printdata();
}