#include <iostream>
using namespace std;

int isPalindrome(int arr[], int n)
{
    int Flag = 1;
    for (int counter = 0; counter < n / 2; counter++)
        if (arr[counter] != arr[(n - 1) - counter])
        {
            Flag = 0;
            break;
        }
    return Flag;
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
    if (isPalindrome(arr, n))
        cout << "The array is a palindrome" << endl;
    else
        cout << "The array is not a palindrome" << endl;
    delete[] arr;
    return (0);
}