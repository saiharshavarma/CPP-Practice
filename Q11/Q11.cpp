#include <iostream>
using namespace std;

int isPrime(int n)
{
    int Prime = 1;
    for (int counter = 2; counter <= n / 2; counter++)
    {
        if (n % counter == 0)
        {
            Prime = 0;
            break;
        }
    }
    return Prime;
}

void PrimeFactors(int n)
{
    for (int counter = 2; counter <= n; counter++)
    {
        if (n % counter == 0 && isPrime(counter))
            cout << counter << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;
    PrimeFactors(n);
    return (0);
}