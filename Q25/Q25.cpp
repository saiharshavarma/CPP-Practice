#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    cout << "Enter 10 elements to store in the array" << endl;
    for (int counter = 0; counter < 10; counter++)
        cin >> arr[counter];
    cout << "The elements that are stored in the array are:" << endl;
    for (int counter = 0; counter < 10; counter++)
        cout << "Element " << counter + 1 << " : " << arr[counter] << endl;
    return (0);
}