#include <iostream>
using namespace std;

void display(int *ptr)
{
    cout << "The number entered is " << *ptr << endl;
}

int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    int *ptr = &n;
    display(ptr);
    return (0);
}