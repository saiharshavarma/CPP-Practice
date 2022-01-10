#include <iostream>
using namespace std;

int Factorial(int n, int *ptr)
{
    *ptr = 1;
    for (int counter = 1; counter <= n; counter++)
        *ptr *= counter;
    return (*ptr);
}

int main()
{
    int n;
    int fact;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    cout << n << "! = " << Factorial(n, &fact) << endl;
    return (0);
}