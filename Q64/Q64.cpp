#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int roll;
    string name;
    int age;
    string address;
    float marks;
};

int main()
{
    struct Student s[15];
    for (int counter = 0; counter < 15; counter++)
    {
        s[counter].roll = counter + 1;
        cout << "Enter the name of the student: " << endl;
        cin >> s[counter].name;
        cout << "Enter the age of the student: " << endl;
        cin >> s[counter].age;
        cout << "Enter the address of the student: " << endl;
        getline(cin, s[counter].address);
        cout << "Enter the marks of the student: " << endl;
        cin >> s[counter].marks;
    }
    cout << "Roll No. Name\tAge\tAddress\tMarks" << endl;
    for (int counter = 0; counter < 15; counter++)
        cout << s[counter].roll << "\t" << s[counter].name << "\t" << s[counter].age << "\t" << s[counter].address << "\t" << s[counter].marks << endl;
    return (0);
}