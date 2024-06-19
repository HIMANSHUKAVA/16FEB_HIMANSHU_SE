#include <iostream>
using namespace std;
class self
{
public:
  string name;
  int roll;
  string school;
  void cdata()
  {
    cout << "=====personal detal=========" << endl;
    cout << "enter your name";
    cin >> name;
    cout << "enter the roll number";
    cin >> roll;
    cout << "enter the school name";
    cin >> school;
  }
};
class student
{
public:
  int gujarati, english, account, state, economic, ba, spcc;
  void getdata()
  {
    cout << "======mark detail=======" << endl;
    cout << "enter the gujarati marks";
    cin >> gujarati;
    cout << "enter the english marks";
    cin >> english;
    cout << "enter the account marks";
    cin >> account;
    cout << "enter the state marks";
    cin >> state;
    cout << "enter the ecconomic marks";
    cin >> economic;
    cout << "enter the ba marks";
    cin >> ba;
    cout << "enter the spcc marks";
    cin >> spcc;
  }
};
class printdata : public self, public student
{

public:
  void getdata2()
  {
    int total = gujarati + english + account + state + economic + spcc + ba;
    cout << endl
         << "========marksheet=======" << endl;
    cout << "your gujarati marks is" << " " << gujarati << endl;
    cout << "your english marks is" << " " << english << endl;
    cout << "your account mark is" << " " << account << endl;
    cout << "your state mark is" << " " << state << endl;
    cout << "your economic marks is" << " " << economic << endl;
    cout << "your ba marks is" << " " << ba << endl;
    cout << "your spcc marks is" << " " << spcc << endl;
    cout << "total mark is" << " " << total << endl;
    cout << "your percentage is" << " " << total / 7 << endl;
    cout << "================thank you============";
  }
};
int main()
{
  printdata pt;
  pt.cdata();
  pt.getdata();
  pt.getdata2();
  return 0;
}