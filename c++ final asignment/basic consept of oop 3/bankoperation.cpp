#include<iostream>
using namespace std;
class bank
{
    private:
    int number;
    int balance;
    public:
    void opening()
    {
        cout<<"please enter the opening amount"<<" "<<endl;
        cin>>balance;
        if(balance>=2000)
        {
            cout<<"succesful";
        }
        else
        {
            cout<<"sorry re try";
        }
    }
    void withdrawl()
    {
        int amount;

        cout<<"please enter the withdrawl amount";
        cin>>amount;
        if(amount<=balance)
        {
            cout<<"suceesful withdrawl"<<endl;
            balance-=amount;
            cout<<"total balance is"<<" "<<balance;
        }
        else
        {
            cout<<"error";
        }
    }
    void deposit()
    {
        int amount;
        cout<<"enter the deposit amount";
        cin>>amount;
        if(amount>=500)
        {
            cout<<"succesful deposit amount "<<" "<<endl;
            balance+=amount;
            cout<<"total balance is"<<balance<<endl;
        }
    }
};
int main()
{
    bank b;
    b.opening();
    b.withdrawl();
    b.deposit();
    return 0;

}