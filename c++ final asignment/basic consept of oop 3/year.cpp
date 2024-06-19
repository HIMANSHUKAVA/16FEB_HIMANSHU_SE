#include <iostream>
using namespace std;
class date
{
private:
    int month, year, flag = 0;
    int day;

public:
    void getdata()
    {
        cout << "enter the date";
        cin >> day;
        cout << "enter the month";
        cin >> month;
        cout << "enter the year";
        cin >> year;
    }
    void setdata()
    {
        cout << day << " /" << month << " /" << year << endl;
        if (day < 1 || day > 30)
        { // day mate
            cout << "invalid date" << endl;
            flag++;
        }
        if (month < 1 || month > 12)
        {
            cout << "invalid month";
            flag++;
        }
        if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 31)
        {
            cout << "invalid date" << endl;
        }
        if (month == 2)
        {
            if (year % 4 == 0)
            {
                day > 29;
                flag++;
            }
            else if (day > 28)
            {
                cout << "invalid date";
                flag++;
            }
        }
        if(flag==0)
        {
            cout<<"date is valid";
        }
    }
};
int main()
{
    date st;
    st.getdata();
    st.setdata();
}