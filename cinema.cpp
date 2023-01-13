#include<iostream>
using namespace std;
float totalincome(string,int,int);

main()
{
    string catagory;
    int col,row;
    float income;
    cout<<"enter catagory:";
    cin>>catagory;
    cout<<"enter coloumns:";
    cin>>col;
    cout<<"enter rows:";
    cin>>row;
    income=totalincome(catagory,col,row);
    cout<<"total income from hall="<<income;
}

float totalincome(string catagory,int col,int row)
{
   float total;
    if(catagory=="premiere")
    {
        total=col*row*12;
    }
    if(catagory=="normal")
    {
        total=col*row*7.50;

    }
     if(catagory=="discount")
     {
        total=col*row*5;
     }
    return total;

}