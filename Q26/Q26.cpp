#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    cout << "Enter 10 elements to store in the array" << endl;
    for (int counter = 0; counter < 10; counter++)
        cin >> arr[counter];
    int n;
    cout << "Enter the number to be searched: " << endl;
    cin >> n;
    int Flag = 0;
    for (int counter = 0; counter < 10; counter++)
    {
        if (arr[counter] == n)
        {
            Flag = 1;
            break;
        }
    }
    if (Flag)
        cout << n << " has been found in the array" << endl;
    else
        cout << n << " is not present in the array" << endl;
    return (0);
}