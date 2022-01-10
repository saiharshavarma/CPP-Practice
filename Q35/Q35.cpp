#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The subarray between indexes 3 and 8 is: " << endl;
    for (int counter = 3; counter < 9; counter++)
        cout << arr[counter] << " ";
    return (0);
}