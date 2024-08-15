#include <iostream>
using namespace std;
// basic funtcion to get name;
void yourself()
{
    string name;
    cout << "===========Welcome Tops Food House==========" << endl;
    cout << " Please Enter Your Name";
    cin >> name;
    cout << "Hello" << " " << name << endl;
}
void cdata()
{
    cout << "Your Order Will Be deliverd In 15 minutes " << endl;
    cout << "Thank Your For ordering From Tops Food House" << endl;
    cout << endl;
    cout << "==============================================" << endl;
}
// menue function
void mdata()

{
    cout << "=====================Tops Food Menue====================" << endl;
    cout << "1) Pizza" << " " << endl;
    cout << "2) Burger" << " " << endl;
    cout << "3) Sadwitch" << " " << endl;
    cout << "4) Rolls" << " " << endl;
    cout << "5) Biryani" << " " << endl;
}

// there are three class define to item like pizza , burger , sandwitch , rols , biryani;
class pizza
{

    // pizzas detail for multiple ordering
private:
    int ch, q;                                                                     // the variable are use to quantitny and choice
    char pizza1[30] = "classic", pizza2[30] = "4cheez", pizza3[30] = "vegitable "; // string method to get name
    int p1 = 250, p2 = 350, p3 = 450;                                              // price stored in int variable
    int d;

public:
    void pizzadata()
    {

        cout << "=================Your Chois Is pizza house==============" << endl;

        cout << pizza1 << " " << "pizza" << "  " << p1 << endl;
        cout << pizza2 << " " << "pizza" << "  " << p2 << endl;
        cout << pizza3 << " " << "pizza" << "  " << p3 << endl;

        cout << "Enter Your choes ";
        cin >> ch;
        cout << "Enter The quantity";
        cin >> q;
        if (ch == 1)
        {

            cout << "Your Order Is : " << "  " << pizza1 << " " << "Pizza " << endl;
            cout << "Your total Bill is : " << " " << p1 * q << endl;
            cdata();
        }
        else if (ch == 2)
        {

            cout << "Your Order Is : " << "  " << pizza2 << " " << "Pizza" << endl;
            cout << "Your total Bill is : " << " " << p2 * q << endl;
            cdata();
        }
        else if (ch == 3)

        {

            cout << "Your Order Is : " << "  " << pizza3 << endl;
            cout << "Your total Bill is : " << " " << p3 * q << endl;
            cdata();
        }
    }
};

class burger : public pizza
{
    // burger details
private:
    int Burger_Price = 0, a, m;
    string burger1 = "Bombey Style  Burger", burger2 = "Tops Special Burger", burger3 = "Chili Burger";
    int bp1 = 150, bp2 = 300, bp3 = 250;

public:
    void burgerdata()
    {
        cout << "============Your choes Is  Burger House============" << endl;
        // burger menuus for user
        cout << burger1 << " " << bp1 << endl;
        cout << burger2 << " " << bp2 << endl;
        cout << burger3 << " " << bp3 << endl;

        cout << "Enter Your Choes";
        cin >> a;
        cout << "Enter The Quantity";
        cin >> m;
        // select quantity depend upon prices and biling system
        if (a == 1)
        {
            cout << "Your Choes is " << " " << burger1 << endl;
            cout << "Your total BIll Is : " << bp1 * m << endl;
            cdata();
        }
        else if (a == 2)
        {
            cout << "Your Choes is " << " " << burger2 << endl;
            cout << "Your total BIll Is : " << bp2 * m << endl;
            cdata();
        }
        else if (a == 3)
        {
            cout << "Your Choes is " << " " << burger3 << endl;
            cout << "Your total BIll Is : " << bp3 * m << endl;
            cdata();
        }
    }
};
//  started in sandwitch house
class Sandwitch : public burger
{

private:
    string sand1 = "club Sandwitch", sand2 = "Veg.crispy Sandwtch", sand3 = "Extream veg Sandwitch";
    int s1 = 240, s2 = 160, s3 = 100;
    int Sand_bill = 0, s, w;

public:
    void sandwitchdata()
    {
        cout << "=====================Your choes Is Sandwitch House===============" << endl;
        cout << sand1 << "  " << s1 << " " << endl;
        cout << sand2 << "  " << s2 << " " << endl;
        cout << sand3 << "  " << s3 << " " << endl;

        cout << "Enter Your Choes";
        cin >> s;
        cout << "Enter Your quantity";
        cin >> w;
        // biling system for sandwitch
        if (s == 1)
        {

            cout << "Your Choes is " << " " << sand1 << endl;
            cout << "Your total BIll Is : " << s1 * w << endl;
            cdata();
        }
        else if (s == 2)
        {

            cout << "Your Choes is " << " " << sand2 << endl;
            cout << "Your total BIll Is : " << s2 * w << endl;
            cdata();
        }
        else if (s == 3)
        {

            cout << "Your Choes is " << " " << sand3 << endl;
            cout << "Your total BIll Is : " << s3 * w << endl;
            cdata();
        }
    }
};
class rolls : public Sandwitch
{

private:
    string rs1 = "chili Rolls", rs2 = "Chees Rolls", rs3 = "Tops Special Rols";
    int r1 = 70, r2 = 60, r3 = 120;
    int rolls_Price = 0, r, j, o;

public:
    void rollsdata()
    {

        cout << "================Your choes is Rolls House===================" << endl;

        cout << rs1 << " " << r1 << endl;
        cout << rs2 << " " << r2 << endl;
        cout << rs3 << " " << r3 << endl;

        cout << "Enter Your Choes";
        cin >> r;
        cout << "Enter Your quantity";
        cin >> j;

        if (r == 1)
        {

            cout << "Your Choes is " << " " << rs1 << endl;
            cout << "Your total BIll Is : " << r1 * j << endl;
            cdata();
        }
        else if (r == 2)
        {
            cout << "Your Choes is " << " " << rs2 << endl;
            cout << "Your total BIll Is : " << r2 * j << endl;
            cdata();
        }
        else if (r == 3)
        {

            cout << "Your Choes is " << " " << rs3 << endl;
            cout << "Your total BIll Is : " << r3 * j << endl;

            cdata();
        }
    }
};
class biryani : public rolls
{
private:
    string b1 = "Hydrabadi Biryani", b2 = "Chili Biryani", b3 = "Tops Special Biryani";
    int t1 = 250, t2 = 350, t3 = 450, e, n;

public:
    void Biryanidata()
    {

        cout << "================Starting Biryani Menue============" << endl;

        cout << b1 << " " << t1 << endl;
        cout << b2 << " " << t2 << endl;
        cout << b3 << " " << t3 << endl;

        cout << "Enter Your Choes";
        cin >> e;
        cout << "Enter Your Quantity";
        cin >> n;

        if (e == 1)
        {

            cout << "Your Choes is " << " " << b1 << endl;
            cout << "Your total BIll Is : " << t1 * n << endl;
            cdata();
            ;
        }
        if (e == 2)
        {

            cout << "Your Choes is " << " " << b2 << endl;
            cout << "Your total BIll Is : " << t2 * n << endl;
            cdata();
        }
        if (e == 3)
        {

            cout << "Your Choes is " << " " << b3 << endl;
            cout << "Your total BIll Is : " << t3 * n << endl;
            cdata();
        }
    }
};

int main()
{
    biryani k;
    yourself();
    cout << endl;
      char m;

       do  
       {
        cout << "-------------------------------------------------------" << endl;
        mdata();
        cout << "--------------------------------------------------------" << endl;
    
        int h;
        cout << "Please Enter Your Choes";
        cin >> h;
      
       
        switch (h)
        {
        case 1:
            k.pizzadata();
            break;
        case 2:
            k.burgerdata();
            break;
        case 3:
            k.sandwitchdata();
            break;
        case 4:
            k.rollsdata();
            break;
        case 5:
            k.Biryanidata();
            break;
        default:
            cout << "oops" << endl;
            cout << "Please Try Again" << endl;
            break;
        }
        cout << "continue";
        cin >> m;

    } 
    while((m=='y') ||( m=='Y'));
}
