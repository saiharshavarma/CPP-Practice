#include <iostream>
using namespace std;

struct Student
{
    int roll;
    string name;
    int age;
    float marks;
};

int main()
{
    struct Student s;
    cout << "Enter the roll number of the student: " << endl;
    cin >> s.roll;
    cout << "Enter the name of the student: " << endl;
    cin >> s.name;
    cout << "Enter the age of the student: " << endl;
    cin >> s.age;
    cout << "Enter the marks of the student: " << endl;
    cin >> s.marks;
    cout << "Roll No. Name\tAge\tMarks" << endl;
    cout << s.roll << "\t" << s.name << "\t" << s.age << "\t" << s.marks << endl;
    return (0);
}