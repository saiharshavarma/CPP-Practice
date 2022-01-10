#include <iostream>
using namespace std;

int main()
{
    int **matrix = new int *[3];
    for (int counter = 0; counter < 3; counter++)
        matrix[counter] = new int[3];
    cout << "Enter the elements of the 3X3 matrix row-wise: " << endl;
    for (int rowCounter = 0; rowCounter < 3; rowCounter++)
        for (int columnCounter = 0; columnCounter < 3; columnCounter++)
            cin >> matrix[rowCounter][columnCounter];

    int Flag = 1;
    for (int rowCounter = 0; rowCounter < 3; rowCounter++)
        for (int columnCounter = 0; columnCounter < 3; columnCounter++)
        {
            if (matrix[rowCounter][columnCounter] != matrix[columnCounter][rowCounter] && rowCounter != columnCounter)
            {
                Flag = 0;
                break;
            }
        }
    if (Flag)
        cout << "The matrix is a symmetric" << endl;
    else
        cout << "The matrix is not symmetric" << endl;

    for (int counter = 0; counter < 3; counter++)
        delete[] matrix[counter];
    delete[] matrix;
    return (0);
}