#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;
    int *arr = new int[n];
    int *maxpair = new int[2];
    int *minpair = new int[2];
    cout << "Enter the elements of the array: " << endl;
    for (int counter = 0; counter < n; counter++)
        cin >> arr[counter];

    int max = abs(arr[1] - arr[0]);
    maxpair[0] = arr[0];
    maxpair[1] = arr[1];
    int min = abs(arr[1] - arr[0]);
    minpair[0] = arr[0];
    minpair[1] = arr[1];
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (abs(arr[i] - arr[j]) > max)
            {
                max = abs(arr[i] - arr[j]);
                maxpair[0] = arr[i];
                maxpair[1] = arr[j];
            }
            if (abs(arr[i] - arr[j]) < min)
            {
                min = abs(arr[i] - arr[j]);
                minpair[0] = arr[i];
                minpair[1] = arr[j];
                cout << minpair[0] << " " << minpair[1] << endl;
            }
        }
    cout << "The maximum pair among the elements of the array is " << maxpair[0] << " and " << maxpair[1] << " with distance = " << max << endl;
    cout << "The minimum pair among the elements of the array is " << minpair[0] << " and " << minpair[1] << " with distance = " << min << endl;
    delete[] minpair;
    delete[] maxpair;
    delete[] arr;
    return (0);
}