#include<iostream>
using namespace std;
float payable(string ,string ,float);


main()
{
string day;
string month;
float amount;
float price;
cout<<"enter day:";
cin>>day;
cout<<"enter month:";
cin>>month;
cout<<"enter amount";
cin>>amount;
price=payable(day,month,amount);
cout<<"payable amount"<<price;
}

float payable(string day,string month,float amount)
{
    float payable;
    if(day=="sunday")
    {
      if(month=="october")
      {
        payable=amount-amount*.10;

      }  
        else
        {
            payable=amount-amount*.05;


        }
    }
    else
    {
        payable=amount;
    }
    return payable;
    }


