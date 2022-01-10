#include <iostream>
using namespace std;

int sum(int arr[], int n)
{
    int sum = 0;
    for (int counter = 0; counter < n; counter++)
        sum += arr[counter];
    return sum;
}

int average(int arr[], int n)
{
    return sum(arr, n) / n;
}

int largest(int arr[], int n)
{
    int max = arr[0];
    for (int counter = 0; counter < n; counter++)
        if (arr[counter] > max)
            max = arr[counter];
    return max;
}

int smallest(int arr[], int n)
{
    int min = arr[0];
    for (int counter = 0; counter < n; counter++)
        if (arr[counter] < min)
            min = arr[counter];
    return min;
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements of the array: " << endl;
    for (int counter = 0; counter < n; counter++)
        cin >> arr[counter];
    cout << "The sum of all the elements present in the array is " << sum(arr, n) << endl;
    cout << "The average of all the elements present in the array is " << average(arr, n) << endl;
    cout << "The largest element in the array is " << largest(arr, n) << endl;
    cout << "The smallest element in the array is " << smallest(arr, n) << endl;
    delete[] arr;
    return (0);
}