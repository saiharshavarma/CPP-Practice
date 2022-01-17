#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    int inches;
};

int main()
{
    struct Distance d1, d2, d3;
    cout << "Enter distance 1 (feet, inches): " << endl;
    cin >> d1.feet >> d1.inches;
    cout << "Enter distance 2 (feet, inches): " << endl;
    cin >> d2.feet >> d2.inches;
    cout << "Adding..." << endl;
    d3.feet = d1.feet + d2.feet;
    d3.inches = d1.inches + d2.inches;
    d3.feet += (d3.inches / 12);
    d3.inches = d3.inches % 12;
    cout << d3.feet << " ft " << d3.inches << " inches" << endl;
    return (0);
}