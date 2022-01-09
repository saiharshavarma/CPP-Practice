#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    cout << "Number entered is " << *(&n) << endl;
    return (0);
}