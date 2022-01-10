#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;
    int *arr = new int[n];
    int *larr = new int[n / 2];
    int *rarr = new int[n / 2];
    cout << "Enter the elements in the array: " << endl;
    for (int counter = 0; counter < n; counter++)
        cin >> arr[counter];
    for (int counter = 0; counter < n / 2; counter++)
        larr[counter] = arr[counter];
    for (int counter = 0; counter < n / 2; counter++)
        rarr[counter] = arr[n / 2 + counter];
    cout << "The first split array is: " << endl;
    for (int counter = 0; counter < n / 2; counter++)
        cout << larr[counter] << "\t";
    cout << endl
         << "The second split array is: " << endl;
    for (int counter = 0; counter < n / 2; counter++)
        cout << rarr[counter] << "\t";
    delete[] rarr;
    delete[] larr;
    delete[] arr;
    return (0);
}