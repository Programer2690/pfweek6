#include<iostream>
using namespace std;

string checktitle(int,char);

main()
{
    int age;
    char gender;
    cout<<"enter age:";
    cin>>age;
    cout<<"enter gender:";
    cin>>gender;
    checktitle(age,gender);

}
string checktitle(int age,char gender)
{
    if(age>=16&&gender=='m')
    {
        cout<<"Mr.";

    }
    else if(age<16&&gender=='m')
    {
        cout<<"Master";
    }
    else if(age>=16&&gender=='f')
    {
        cout<<"Mrs.";

    }
     else if(age<16&&gender=='f')
    {
        cout<<"Miss";
    }

}
