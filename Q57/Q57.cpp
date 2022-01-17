#include <iostream>
#define AREA(l, b) (l * b)
#define PERIMETER(l, b) (2 * (l + b))
using namespace std;

int main()
{
    int l, b;
    cout << "Enter the length of breadth of a rectangle: " << endl;
    cin >> l >> b;
    cout << "Area of the rectangle: " << AREA(l, b) << endl;
    cout << "Perimeter of the rectangle: " << PERIMETER(l, b) << endl;
    return (0);
}