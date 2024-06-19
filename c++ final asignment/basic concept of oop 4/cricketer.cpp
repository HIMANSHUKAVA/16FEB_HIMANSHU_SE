#include <iostream>
using namespace std;
class batsmen
{
public:
    string name;
    int run;
    int match;
    int perfomance;

    void getdata()
    {
        cout << "enter the criketer name";
        cin >> name;
        cout << "enter the total match";
        cin >> match;
        cout << "enter the criketer run";
        cin >> run;
        cout << "enter the best perfomance";
        cin >> perfomance;
    }
};
class av : public batsmen
{
public:
    void cm()
    {
      cout<<"average run is"<<run/match<<endl;   
    }
    void printdata()
    {
        cout<<"batsman name is"<<" "<<name<<endl;
        cout<<"batsman run is"<<" "<<run<<endl;
        cout<<"batsman total match is"<<" "<<match<<endl;
        cout<<"batsman best perfomance is"<<" "<<perfomance<<endl;
        cm();

    }
};
int main()
{
    av a;
    a.getdata();
    a.printdata();
}