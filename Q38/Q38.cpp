#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements of the array: " << endl;
    for (int counter = 0; counter < n; counter++)
        cin >> arr[counter];
    int temp = arr[n - 1];
    for (int counter = n - 1; counter > 0; counter--)
        arr[counter] = arr[counter - 1];
    arr[0] = temp;
    for (int counter = 0; counter < n; counter++)
        cout << arr[counter] << " ";
    delete[] arr;
    return (0);
}