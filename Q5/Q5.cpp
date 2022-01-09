#include <iostream>
using namespace std;

void OddEven(int a)
{
    if (a % 2 == 0)
        cout << a << " is an even number" << endl;
    else
        cout << a << " is an odd number" << endl;
}

int main()
{
    int a;
    cout << "Enter a number to check whether it is an even or odd number" << endl;
    cin >> a;
    OddEven(a);
    return (0);
}