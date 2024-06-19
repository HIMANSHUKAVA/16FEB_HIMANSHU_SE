#include <iostream>
using namespace std;
class address
{
private:
  string ad;

public:
  address(string c) : ad(c)
  {
  }
  void cdata()
  {
    cout << "address is" << ad << endl;
  }
};
class student
{
  string name;
  string cl;
  int roll;
  address as; // using aggreation
  int marks;

public:
  student(string a, string b, int c, int d, string e) : name(a), cl(b), roll(c), marks(d), as(e)
  {
  }
  void amd()
  {
    if (marks >= 90)
      cout << "A++ grade"<<endl;
    else if (marks >= 80)
      cout << "A grade"<<endl;
    else if (marks >= 70)
      cout << "B+ grade"<<endl;
    else if (marks >= 60)
      cout << " B grade"<<endl;
    else if (marks >= 50)
      cout << "C grade"<<endl;
    else
      cout << "fail"<<endl;
  }
  void printdata()
  {
    cout << "name is " << name << endl;
    cout << "class is" << cl << endl;
    cout << "roll" << roll << endl;
    as.cdata();
    cout << "marks" << " " << marks << endl;
  }
};
int main()
{
  string name, cl, rc;
  int roll;
  int marks;
  cout << "enter the student name";
  cin >> name;
  cout << "enter the student class";
  cin >> cl;
  cout << "enter the student address";
  cin >> rc;
  cout << "enter the student roll";
  cin >> roll;
  cout << "enter the student marks";
  cin >> marks;
  student st(name, cl, roll, marks,rc);
  st.amd();
  st.printdata();
}
