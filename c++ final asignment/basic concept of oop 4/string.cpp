#include<iostream>
using namespace std;
class mop
{
	private:
	string a;
	public:
	void getdata(string g)
	{
		a = g;
	}
	void showdata()
	{
		cout<<""<<a<<endl;
	}
	mop operator + (mop obj)
	{
		mop temp ;
		temp.a = a + obj.a;
		return temp;
	}
	
};
int main()
{
	mop m1,m2,m3;
	m1.getdata("hello");
	m2.getdata("himanshu");
	m3 = m1 + m2;
	m3.showdata();
	return 0;
}