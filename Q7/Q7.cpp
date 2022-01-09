#include <iostream>
using namespace std;

void isPrime(int n)
{
    int Prime = 1;
    for (int counter = 2; counter < n / 2; counter++)
    {
        if (n % counter == 0)
        {
            cout << n << " is not a Prime number" << endl;
            Prime = 0;
            break;
        }
    }
    if (Prime)
        cout << n << " is a Prime number";
}

int main()
{
    int n;
    cout << "Enter a number to check whether it is an Prime or not" << endl;
    cin >> n;
    isPrime(n);
    return (0);
}