#include <iostream>
using namespace std;

int maximum(int a, int b, int c)
{
    return (a > b) ? (a > c ? a : c) : (b > c ? b : c);
}

int minimum(int a, int b, int c)
{
    return (a < b) ? (a < c ? a : c) : (b < c ? b : c);
}

int main()
{
    int a, b, c;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;
    cout << "Enter the value of c" << endl;
    cin >> c;

    cout << "The maximum among a, b, c is " << maximum(a, b, c) << endl;
    cout << "The minimum among a, b, c is " << minimum(a, b, c) << endl;
    return (0);
}