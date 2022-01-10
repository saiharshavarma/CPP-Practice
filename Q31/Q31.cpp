#include <iostream>
using namespace std;

int maximum(int arr[], int n)
{
    int max = arr[0];
    for (int counter = 0; counter < n; counter++)
        if (arr[counter] > max)
            max = arr[counter];
    return max;
}

int minimum(int arr[], int n)
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
    cout << "Enter the number of elements in the array:" << endl;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements of the array:" << endl;
    for (int counter = 0; counter < n; counter++)
        cin >> arr[counter];
    cout << "The maximum element in the array is " << maximum(arr, n) << endl;
    cout << "The minimum element in the array is " << minimum(arr, n) << endl;
    delete[] arr;
    return (0);
}