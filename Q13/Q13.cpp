#include <iostream>
using namespace std;

int isPerfect(int n)
{
    int sum = 0;
    for (int counter = 1; counter < n; counter++)
        if (n % counter == 0)
            sum += counter;
    if (sum == n)
        return 1;
    return 0;
}

int main()
{
    cout << "Perfect Numbers between 1 and 100" << endl;
    for (int counter = 1; counter <= 100; counter++)
        if (isPerfect(counter))
            cout << counter << endl;
    return (0);
}