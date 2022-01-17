#include <iostream>
using namespace std;

struct Marks
{
    int roll;
    string name;
    float chem_marks;
    float maths_marks;
    float phy_marks;
};

int main()
{
    struct Marks s[5];
    for (int counter = 0; counter < 5; counter++)
    {
        s[counter].roll = counter + 1;
        cout << "Enter the name of the student: " << endl;
        cin >> s[counter].name;
        cout << "Enter the Chemistry Marks of the student: " << endl;
        cin >> s[counter].chem_marks;
        cout << "Enter the Maths Marks of the student: " << endl;
        cin >> s[counter].maths_marks;
        cout << "Enter the Physics Marks of the student: " << endl;
        cin >> s[counter].phy_marks;
    }
    cout << "Roll\tName\tPercentage" << endl;
    for (int counter = 0; counter < 5; counter++)
        cout << s[counter].roll << "\t" << s[counter].name << "\t" << (s[counter].chem_marks + s[counter].maths_marks + s[counter].phy_marks) / 3 << endl;
    return (0);
}