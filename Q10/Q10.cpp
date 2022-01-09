#include <iostream>
using namespace std;

int mulTable(int n, int i = 1)
{
    if (i > 10) // Base Case
        return (0);

    cout << n << " * " << i << " = " << n * i << endl;
    return mulTable(n, i + 1); // Recursive Expression
}

int main()
{
    cout << "Multiplication Table of 15" << endl;
    mulTable(15);
    return (0);
}