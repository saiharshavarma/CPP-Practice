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
    // cout << "The value at the address location " << ptr << " is " << *ptr << endl;
    cout << "The address of ptr is " << double_ptr << endl;
    // cout << "The value at the address location " << double_ptr << " is " << *double_ptr << endl;
    // cout << "The value of n is " << **double_ptr << endl;
    return (0);
}