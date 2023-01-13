#include <iostream>
using namespace std;
char grade(int mark);

main()
{
    int mark;
    char marks;
    cout << "enter marks:";
    cin >> mark;
    marks = grade(mark);
    cout << "grade is" << marks;
}

char grade(int mark)
{
    char grade;
    if (mark < 50)
    {
        grade = 'f';
    }
    else if (mark >= 51 && mark <= 60)
    {
        grade = 'e';
    }
    else if (mark >= 61 && mark <= 70)
    {
        grade = 'd';
    }
    else if (mark >= 71 && mark <= 80)
    {
        grade = 'c';
    }
    else if (mark >= 81 && mark <= 85)
    {
        grade = 'b';
    }
    else
        
        {
            grade = 'a';
        }
    return grade;
}