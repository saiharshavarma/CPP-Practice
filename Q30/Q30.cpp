#include <iostream>
using namespace std;

int main()
{
    int rows;
    int columns;
    cout << "Enter the number of rows in the matrix: " << endl;
    cin >> rows;
    cout << "Enter the number of columns in the matrix: " << endl;
    cin >> columns;
    int **arr = new int *[rows];
    for (int counter = 0; counter < rows; counter++)
        arr[counter] = new int[columns];
    cout << "Enter the elements of the matrix row-wise" << endl;
    for (int rowCounter = 0; rowCounter < rows; rowCounter++)
        for (int columnCounter = 0; columnCounter < columns; columnCounter++)
            cin >> arr[rowCounter][columnCounter];

    for (int rowCounter = 0; rowCounter < rows; rowCounter++)
    {
        for (int columnCounter = 0; columnCounter < columns; columnCounter++)
            cout << arr[rowCounter][columnCounter] << " ";
        cout << endl;
    }

    for (int counter = 0; counter < rows; counter++)
        delete[] arr[counter];
    delete[] arr;
    return (0);
}