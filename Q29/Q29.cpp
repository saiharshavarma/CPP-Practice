#include <iostream>
using namespace std;

int sum(int arr[], int n)
{
    int sum = 0;
    for (int counter = 0; counter < n; counter++)
        sum += arr[counter];
    return sum;
}

int prod(int arr[], int n)
{
    int prod = 1;
    for (int counter = 0; counter < n; counter++)
        prod *= arr[counter];
    return prod;
}

int main()
{
    int n = 10;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements of the array: " << endl;
    for (int counter = 0; counter < n; counter++)
        cin >> arr[counter];
    cout << "The sum of all elements in the array is " << sum(arr, n) << endl;
    cout << "The product of all elements in the array is " << prod(arr, n) << endl;
    delete[] arr;
    return (0);
}