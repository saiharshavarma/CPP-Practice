#include <iostream>
using namespace std;

int Factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * Factorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    cout << n << "! = " << Factorial(n) << endl;
    return (0);
}