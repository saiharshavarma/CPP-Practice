#include <iostream>
using namespace std;

int reverseNumber(int n, int *ptr)
{
    int temp;
    if (n < 0)
        temp = -n;
    else
        temp = n;
    *ptr = 0;
    while (temp > 0)
    {
        *ptr = *ptr * 10 + (temp % 10);
        temp = temp / 10;
    }
    if (n < 0)
        return -*ptr;
    return *ptr;
}

int main()
{
    int n;
    int reverse;
    cout << "Enter the number to be reversed" << endl;
    cin >> n;
    cout << "The reversed number is " << reverseNumber(n, &reverse) << endl;
    return (0);
}