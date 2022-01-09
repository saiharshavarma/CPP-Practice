#include <iostream>
#include <string>
using namespace std;

void gradeDisplay(int n)
{
    string grade;
    if (n > 90 && n <= 100)
        grade = "AA";
    else if (n > 80 && n <= 90)
        grade = "AB";
    else if (n > 70 && n <= 80)
        grade = "BB";
    else if (n > 60 && n <= 70)
        grade = "BC";
    else if (n > 50 && n <= 60)
        grade = "CD";
    else if (n > 40 && n <= 50)
        grade = "DD";
    else
        grade = "Fail";
    cout << "Your grade is " << grade << endl;
}

int main()
{
    int marks;
    cout << "Enter your marks:" << endl;
    cin >> marks;
    gradeDisplay(marks);
    return (0);
}