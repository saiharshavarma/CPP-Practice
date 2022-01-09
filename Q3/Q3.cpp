#include <iostream>
using namespace std;

float circumference(int r)
{
    return (2 * 3.14 * r);
}

float area(int r)
{
    return (3.14 * r * r);
}

int main()
{
    int radius;
    cout << "Enter the radius of the circle" << endl;
    cin >> radius;
    cout << "The circumference of the circle is " << circumference(radius) << endl;
    cout << "The area of the circle is " << area(radius) << endl;
    return (0);
}