#include <iostream>
using namespace std;
float checkcost(string, string, int);

main()
{
    string city, product;
    int quantity;
    float total;
    cout << "enter city:";
    cin >> city;
    cout << "enter product:";
    cin >> product;
    cout << "how many products do you want:";
    cin >> quantity;
    
    total=checkcost(city, product, quantity);
    cout<<"total payable amount="<<total;
}
float checkcost(string city, string product, int quantity)
{
    float payable;
    if (city == "sofia")
    {
        if (product == "coffee")
        {
            payable = quantity * 0.5;
        }
        if (product == "water")
        {
            payable = quantity * 0.8;
        }
        if (product == "beer")
        {
            payable = quantity * 1.20;
        }
        if (product == "sweets")
        {
            payable = quantity * 1.45;
        }
        if (product == "peanuts")
        {
            payable = quantity * 1.60;
        }
    }
    if (city == "plovdiv")
    {
        if (product == "coffee")
        {
            payable = quantity * 0.40;
        }
        if (product == "water")
        {
            payable = quantity * 0.70;
        }
        if (product == "beer")
        {
            payable = quantity * 1.15;
        }
        if (product == "sweets")
        {
            payable = quantity * 1.30;
        }
        if (product == "peanuts")
        {
            payable = quantity * 1.50;
        }
    }
    if (city == "varna")
    {
        if (product == "coffee")
        {
            payable = quantity * 0.45;
        }
        if (product == "water")
        {
            payable = quantity * 0.7;
        }
        if (product == "beer")
        {
            payable = quantity * 1.10;
        }
        if (product == "sweets")
        {
            payable = quantity * 1.35;
        }
        if (product == "peanuts")
        {
            payable = quantity * 1.55;
        }
    }
    return payable;
}
