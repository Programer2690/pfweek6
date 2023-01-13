#include <iostream>
using namespace std;
int greater(int, int, int);

main()
{
    int num1, num3, num2,greatest;
    cout << "enter number1:";
    cin >> num1;
    cout << "enter number 2:";
    cin >> num2;
    cout << "enter number 3:";
    cin >> num3;
   greatest=greater( num1, num2, num3)
    cout<<"greater is"<<greatest;
}
int greater(int num1, int num2, int num3)
{int greatest=
    if (num1 > num2 && num1 > num3)
    {
         greatest=num1;
           }
    else (num2 > num1 && num2 > num3)
    {
       greatest=num2;
    }
    else (num3 > num2 && num3 > num1)
    {
        
      greatest=num3;
    }
    return greatest;
}