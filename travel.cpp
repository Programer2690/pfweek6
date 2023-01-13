#include<iostream>
using namespace std;
float lowestprice(float);


main()
{
    
    float km,total;
   
    cout<<"enter km you want to travel:";
    cin>>km;
    total=lowestprice(km);
    cout<<"lowest price:"<<total;


}
float lowestprice(float km)
{
    float payable;
     string time;
        cout<<"enter time (day/night):";
        cin>>time;
    if(km<=20)
    {
       
        if(time=="day")
        {
            payable=(km*0.79)+0.70;
        }
        else
        {
            payable=(km*0.9)+0.70;
        }
    }
    else if(km>20&&km<100)
    {
        payable=km*0.09;
    }
    else
    {
        payable=km*0.06;
    }
    return payable;
}
