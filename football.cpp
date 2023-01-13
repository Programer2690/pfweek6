#include <iostream>
using namespace std;
float output(int, float, string);

main()
{
    float budget, seat;
    string catagory;
    int num;

    cout << "enter budget[1000-1000000]:";
    cin >> budget;
    cout << "enter catagory:";
    cin >> catagory;
    cout << "enter number of people:";
    cin >> num;
    seat = output(num, budget, catagory);
}
float output(int num, float budget, string catagory)
{
    float tick, remain, a, b, c;
    if (catagory == "normal")
    {
        if (num >= 1 && num <= 4)
        {
            tick = budget - (.75 * budget);
            a = tick;
            b = num * 249.99;
            if (a >= b)
            {
                c = a - b;
                cout << "Yes!you have " << c,
                    cout << " QR left";
            }
            else
            {
                c = b - a;
                cout << "not enough money! you need " << c,
                    cout << " QR more";
            }
        }
        if (num >= 5 && num <= 9)
        {
            tick = budget - (.60 * budget);
            a = tick;
            b = num * 249.99;
            if (a >= b)
            {
                c = a - b;
                cout << "Yes!you have " << c,
                    cout << " QR left";
            }
            else
            {
                c = b - a;
                cout << "not enough money! you need " << c,
                    cout << " QR more";
            }
        }
        if (num >= 10 && num <= 24)
        {
            tick = budget - (.50 * budget);
            a = tick;
            b = num * 249.99;
            if (a >= b)
            {
                c = a - b;
                cout << "Yes!you have " << c,
                    cout << " QR left";
            }
            else
            {
                c = b - a;
                cout << "not enough money! you need " << c,
                    cout << " QR more";
            }
        }
        if (num >= 25 && num <= 49)
        {
            tick = budget - (.40 * budget);
            a = tick;
            b = num * 249.99;
            if (a >= b)
            {
                c = a - b;
                cout << "Yes!you have " << c,
                    cout << " QR left";
            }
            else
            {
                c = b - a;
                cout << "not enough money! you need " << c,
                    cout << " QR more";
            }
        }
        if (num >= 50)
        {
            tick = budget - (.25 * budget);
            a = tick;
            b = num * 249.99;
            if (a >= b)
            {
                c = a - b;
                cout << "Yes!you have " << c,
                    cout << " QR left";
            }
            else
            {
                c = b - a;
                cout << "not enough money! you need " << c,
                    cout << " QR more";
            }
        }
    }
    if (catagory == "vip")
    {
        if (num >= 1 && num <= 4)
        {
            tick = budget - (.75 * budget);
            a = tick;
            b = num * 499.99;
            if (a >= b)
            {
                c = a - b;
                cout << "Yes!you have " << c,
                    cout << " QR left";
            }
            else
            {
                c = b - a;
                cout << "not enough money! you need " << c,
                    cout << " QR more";
            }
        }
        if (num >= 5 && num <= 9)
        {
            tick = budget - (.60 * budget);
            a = tick;
            b = num * 499.99;
            if (a >= b)
            {
                c = a - b;
                cout << "Yes!you have " << c,
                    cout << " QR left";
            }
            else
            {
                c = b - a;
                cout << "not enough money! you need " << c,
                    cout << " QR more";
            }
        }
        if (num >= 10 && num <= 24)
        {
            tick = budget - (.50 * budget);
            a = tick;
            b = num * 499.99;
            if (a >= b)
            {
                c = a - b;
                cout << "Yes!you have " << c,
                    cout << " QR left";
            }
            else
            {
                c = b - a;
                cout << "not enough money! you need " << c,
                    cout << " QR more";
            }
        }
        if (num >= 25 && num <= 49)
        {
            tick = budget - (.40 * budget);
            a = tick;
            b = num * 499.99;
            if (a >= b)
            {
                c = a - b;
                cout << "Yes!you have " << c,
                    cout << " QR left";
            }
            else
            {
                c = b - a;
                cout << "not enough money! you need " << c,
                    cout << " QR more";
            }
        }
        if (num >= 50)
        {
            tick = budget - (.25 * budget);
            a = tick;
            b = num * 499.99;
            if (a >= b)
            {
                c = a - b;
                cout << "Yes!you have " << c,
                    cout << " QR left";
            }
            else
            {
                c = b - a;
                cout << "not enough money! you need " << c,
                    cout << " QR more";
            }
        }
    }
}