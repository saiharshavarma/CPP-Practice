#include <iostream>
#define COMPARE(a, b) ((a > b) ? 1 : 0)
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    if (COMPARE(a, b))
        cout << a << " is greater than " << b << endl;
    else
        cout << a << " is smaller than " << b << endl;
    return (0);
}