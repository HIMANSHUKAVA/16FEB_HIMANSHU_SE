#include <iostream>
using namespace std;
class employe
{
private:
    string emplore_name;
    int id;
    int salary;
    int rating;

public:
    employe(string a, int b, int c, int d) : emplore_name(a), id(b), salary(c), rating(d)
    {
    }
    void salarydata()
    {
        if (rating >= 1 && rating <= 3)
        {
            salary *= 5;
            cout << "salary is" << salary << endl;
            cout << "excelent perfomanc salary";
        }
        else if(rating>4 && rating<=6) cout<<"salary"<<salary*3<<endl; 
        else cout<<"salary"<<salary*2<<endl;
    }
};
    int main()
    {
        string emplore_name;
        int id;
        int salary;
        int rating;
        cout << "enter the employe name";
        cin >> emplore_name;
        cout << "enter the employe id";
        cin >> id;
        cout << "enter the employe salary";
        cin >> salary;
        cout << "enter the employe rating";
        cin >> rating;
        employe ep(emplore_name, id, salary, rating);
        ep.salarydata();
    }