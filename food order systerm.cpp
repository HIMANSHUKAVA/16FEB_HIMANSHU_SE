#include<iostream>
using namespace std;
void myself()
{
	cout << "===========Welcome Tops Food House==========" << endl;
	string name;
	cout<<"Enter Your name";
	cin>> name;
	cout<<"------------------------ hello "<<name<<" -----------------------------"<<endl;
}
int menue()
  {
      int ch;
      cout<<"1)pizza"<<endl;
      cout<<"2)burger"<<endl;
      cout<<"3)sandwitch"<<endl;
      cout<<"4)rolls"<<endl;
      
      cout<<"enter your choice";
      cin>>ch;
      
      return ch;
  }
class order
{
	public:
  int choice;
  int quantity;
  order(int c , int q)
  {
     choice = c;
     quantity = q;
  }
  int getchoice()
  {
      return choice;
  }
  int getquantity()
  {
      return quantity;
  }
};
class food
{

     public:

    string foodName;
    string type1Name;
    int type1Price;
    string type2Name;
    int type2Price;
    string type3Name;
    int type3Price;

        food(string foodName_, string type1Name_, int type1Price_, string type2Name_, int type2Price_, string type3Name_, int type3Price_) {
        foodName = foodName_;
        type1Name = type1Name_;
        type1Price = type1Price_;
        type2Name = type2Name_;
        type2Price = type2Price_;
        type3Name = type3Name_;
        type3Price = type3Price_;
    }
     
};
order fooditem(food &fooditem)
{
  
  int c , q;
  cout<<"----------------------------"<<fooditem.foodName <<"-------------------------------"<<endl;
  cout<<" 1)"<<fooditem.type1Name <<" "<< fooditem.type1Price <<endl;
  cout<<" 1)"<<fooditem.type2Name<<" "<< fooditem.type2Price <<endl; 
  cout<<" 1)"<<fooditem.type3Name<<" "<< fooditem.type3Price <<endl;


  cout<<"Enter your choice";cin>>c;
  cout<<"Enter your quantity";cin>>q;
  
  order order(c,q);
  return order;

  
  
    
}
int generateInvoice(food fooditem , order order)
{


	float bill = 0;
	
	switch(order.getchoice())
    {
    
	case 1:
	cout<<"your order is :"<<fooditem.type1Name <<endl;
	bill =  fooditem.type1Price*order.getquantity();
	break;
	case 2:
    cout<<"your order is :"<<fooditem.type2Name<<endl;
	bill =  fooditem.type2Price*order.getquantity();
	break;
  	case 3:
  	cout<<"your order is :"<<fooditem.type3Name<<endl;
	bill =  fooditem.type3Price*order.getquantity();
	break;
	default:
	cout<<"Please select valid value"<<endl;
	break;
  }	
  
    cout<<"your total bill is :"<<" "<<bill<<endl;
    cout << "Your Order Will Be deliverd In 15 minutes " << endl;
    cout << "Thank Your For ordering From Tops Food House" << endl;
	
	return bill;
}




int main()
{

   char l;
    myself();
    do
    {
	
    int choice;
    choice = menue();
    
    food pizza("pizza" , "margreta" , 250 , "chees",350 , "vegpizza" ,450);
    food burger("Burger", "Normal", 50, "Cheese", 80, "Paneer", 100);
    food sandwich("Sandwich", "Grilled", 50, "Veg", 100, "Cheese", 150);
    food rolls("Rolls", "Veg", 80, "Spicy", 120, "Cheese", 150);
    
    order order(0,0);
    
    switch(choice)
    {
    
	case 1 :
	   order = fooditem(pizza);
       generateInvoice(pizza , order);
        break;
   	case 2:
   	    order= fooditem(burger);
   		generateInvoice(burger , order);
   		break;
   	case 3:
   		order = fooditem(sandwich);
   		generateInvoice(sandwich , order);
   		break;
   	case 4:
   		order =fooditem(rolls);
   		generateInvoice(rolls , order);
   		break;
	default:
    	cout<<"please enter the valid number"<<endl;
	    break;
	}    
    
    
    
    cout<<"Do you want to continue ?";
    cin>>l;
   }
   while(l=='Y' || l=='y');
   {
   	
   }
   

    
    
}



