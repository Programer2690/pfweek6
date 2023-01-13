#include<iostream>
using namespace std;
string checkspeed(float speed);

main()
{
    float speed;
    cout<<"enter speed:";
    cin>>speed;
    checkspeed(speed);



}
string checkspeed(float speed)
{
    if(speed==18)
    {
        cout<<"slow";
    }
    else if(speed>18&&speed<=50)
    {
        cout<<"average";
    }
    else if(speed>50&&speed<=150)
    {
        cout<<"fast";
    }
    else if(speed>150&&speed<1000)
    {
        cout<<"exxtremely fast";
    }
}