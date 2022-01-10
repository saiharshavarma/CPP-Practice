#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;
    int *arr = new int[n + 1];
    cout << "Enter the elements of the array: " << endl;
    for (int counter = 0; counter < n; counter++)
        cin >> arr[counter];
    int largest = arr[0];
    for (int counter = 0; counter < n; counter++)
        if (arr[counter] > largest)
            largest = arr[counter];
    int nextLargest;
    if (arr[0] != largest)
        nextLargest = arr[0];
    else
        nextLargest = arr[1];

    for (int counter = 0; counter < n; counter++)
        if (arr[counter] < largest && arr[counter] > nextLargest)
            nextLargest = arr[counter];

    for (int counter = 0; counter < n; counter++)
        if (arr[counter] == largest)
        {
            int additiveEntity = largest - nextLargest;
            for (int i = n + 1; i > counter + 1; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[counter] = nextLargest;
            arr[counter + 1] = additiveEntity;
            break;
        }

    for (int counter = 0; counter < n + 1; counter++)
        cout << arr[counter] << " ";
    delete[] arr;
    return (0);
}