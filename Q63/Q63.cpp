#include <iostream>
using namespace std;

struct Student
{
    int roll;
    string name;
    int age;
};

int main()
{
    struct Student s[5];
    for (int counter = 0; counter < 5; counter++)
    {
        s[counter].roll = counter + 1;
        cout << "Enter the name of the student: " << endl;
        cin >> s[counter].name;
        cout << "Enter the age of the student: " << endl;
        cin >> s[counter].age;
    }
    cout << "Roll No. Name\tAge" << endl;
    cout << s[1].roll << "\t" << s[1].name << "\t" << s[1].age << endl;
    return (0);
}