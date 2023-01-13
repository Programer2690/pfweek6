#include<iostream>
using namespace std;

main()
{   string brand;
    int num;
    cout<<"enter brand:";
    cin>>brand;
    cout<<"enter price:";
    cin>>num;
    if(brand=="borjan"){
    if(num>=1500)
    {
        cout<<"dont buy!";
    }
    if(num<1500){

        cout<<"buy dress";
    }
    }
    else
{   
    cout<<"dont buy";
}



}
