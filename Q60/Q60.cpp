#include <iostream>
#define ABSOLUTE(a) ((a > 0) ? a : -a)
using namespace std;

int main()
{
    int a;
    cout << "Enter a number: " << endl;
    cin >> a;
    cout << "The absolute value of the number is: " << ABSOLUTE(a) << endl;
    return (0);
}