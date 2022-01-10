#include <iostream>
using namespace std;

int main()
{
    int arr[20];
    cout << "Enter 20 elements to be stored in the array:" << endl;
    for (int counter = 0; counter < 20; counter++)
        cin >> arr[counter];

    int positive = 0, negative = 0, odd = 0, even = 0, zero = 0;
    for (int counter = 0; counter < 20; counter++)
    {
        if (arr[counter] > 0)
            positive++;
        else if (arr[counter] < 0)
            negative++;
        else
            zero++;
        if (arr[counter] % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << "Number of positive numbers in the array: " << positive << endl;
    cout << "Number of negative numbers in the array: " << negative << endl;
    cout << "Number of zeroes in the array: " << zero << endl;
    cout << "Number of even numbers in the array: " << even << endl;
    cout << "Number of odd numbers in the array: " << odd << endl;
    return (0);
}