#include <iostream>
using namespace std;

int main()
{
    int n;
    int *ptr = &n;
    int **double_ptr = &ptr;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    cout << "The address of n (ptr) is " << ptr << endl;
    cout << "The value at the address location " << ptr << " is " << *ptr << endl;
    return (0);
}