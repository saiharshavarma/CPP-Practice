#include <iostream>
#define AVERAGE(a, b) ((a + b) / 2)
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    cout << "The average of the two numbers is: " << AVERAGE(a, b) << endl;
    return (0);
}