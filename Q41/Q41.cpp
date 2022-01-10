#include <iostream>
using namespace std;

void display(int **arr, int rows, int columns)
{
    cout << "Elements in the 2D array: " << endl;
    for (int rowCounter = 0; rowCounter < rows; rowCounter++)
    {
        for (int columnCounter = 0; columnCounter < columns; columnCounter++)
            cout << arr[rowCounter][columnCounter] << " ";
        cout << endl;
    }
}

int main()
{
    int rows;
    int columns;
    cout << "Enter the number of rows and columns in the 2D array: " << endl;
    cin >> rows >> columns;
    int **arr = new int *[rows];
    for (int counter = 0; counter < rows; counter++)
        arr[counter] = new int[columns];
    cout << "Enter the elements in the 2D array: " << endl;
    for (int rowCounter = 0; rowCounter < rows; rowCounter++)
        for (int columnCounter = 0; columnCounter < columns; columnCounter++)
            cin >> arr[rowCounter][columnCounter];
    display(arr, rows, columns);
    for (int counter = 0; counter < rows; counter++)
        delete[] arr[counter];
    delete[] arr;
    return (0);
}