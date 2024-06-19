#include<iostream>
using namespace std;
class base
{
    private:
    int privatevar;
    protected:
    int protedvar;
    public:
    int publicvar;
    base()
    {
        privatevar = 1;
        protedvar = 2;
        publicvar = 3;
    }

};
class mnop : public base
{
    public:
    void deisplay()
    {
        // private maember are not acces fo public modifire
        cout<<"protectedvar"<<protedvar<<endl;
        //protected var are acce for public modifire
        cout<<"publicvar"<<publicvar<<endl;
        //public var acces for public modifire
    }
    
};
class pop : protected base
{
    public:
    void himanshu()
    {
        // private not access for protected
        // cout<<"privatevar"<<private<<endl;
        cout<<"protectedvar"<<protedvar<<endl;
        //protectedvar access for protected base
        cout<<"publicvar"<<publicvar<<endl;
        //publicvar access for protected base
    }
};
class kop:public base
{
    public:
    void mdata()
    {
        // privava not access
        // cout<<"privatvar"<<private<<endl;
        cout<<"protectedvar"<<protedvar<<endl;
        //protectedvar access for public var
        cout<<"publicvar"<<publicvar<<endl;
        //publicvar access
    }
};
int main()
{
    mnop m;
    pop p;
    kop k;
    m.deisplay();
    p.himanshu();
    k.mdata();
    

}