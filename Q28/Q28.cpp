#include <iostream>
using namespace std;

int main()
{
    int arr[20];
    int revarr[20];
    cout << "Enter 20 numbers to be stored in the array:" << endl;
    for (int counter = 0; counter < 20; counter++)
        cin >> arr[counter];
    for (int counter = 0; counter < 20; counter++)
        revarr[counter] = arr[19 - counter];
    cout << "Revered Array:" << endl;
    for (int counter = 0; counter < 20; counter++)
        cout << revarr[counter] << endl;
    return (0);
}