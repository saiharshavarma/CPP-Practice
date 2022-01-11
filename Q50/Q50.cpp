#include <iostream>
using namespace std;

string *sort(string *arr, int n)
{
    for (int counter1 = 0; counter1 < n - 1; counter1++)
    {
        for (int counter2 = counter1 + 1; counter2 < n; counter2++)
        {
            if (arr[counter2] < arr[counter1])
            {
                string temp = arr[counter1];
                arr[counter1] = arr[counter2];
                arr[counter2] = temp;
            }
        }
    }
    return arr;
}

int main()
{
    int n;
    cout << "Enter the number of friends: " << endl;
    cin >> n;
    string *arr = new string[n];
    for (int counter = 0; counter < n; counter++)
        cin >> arr[counter];
    arr = sort(arr, n);
    cout << "The Friend list in sorted order is: " << endl;
    for (int counter = 0; counter < n; counter++)
        cout << arr[counter] << endl;
    delete[] arr;
    return (0);
}