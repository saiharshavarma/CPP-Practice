#include <iostream>
using namespace std;

int **add(int **matrix1, int **matrix2)
{
    int **summatrix = new int *[3];
    for (int counter = 0; counter < 3; counter++)
        summatrix[counter] = new int[3];
    for (int rowCounter = 0; rowCounter < 3; rowCounter++)
        for (int columnCounter = 0; columnCounter < 3; columnCounter++)
            summatrix[rowCounter][columnCounter] = matrix1[rowCounter][columnCounter] + matrix2[rowCounter][columnCounter];
    return summatrix;
}

int **mul(int **matrix1, int **matrix2)
{
    int **prodmatrix = new int *[3];
    for (int counter = 0; counter < 3; counter++)
        prodmatrix[counter] = new int[3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            prodmatrix[i][j] = 0;
            for (int k = 0; k < 3; k++)
                prodmatrix[i][j] += matrix1[i][k] * matrix2[k][j];
        }
    return prodmatrix;
}

int main()
{
    int **matrix1 = new int *[3];
    for (int counter = 0; counter < 3; counter++)
        matrix1[counter] = new int[3];
    int **matrix2 = new int *[3];
    for (int counter = 0; counter < 3; counter++)
        matrix2[counter] = new int[3];
    cout << "Enter the elements of Matrix 1 row-wise" << endl;
    for (int rowCounter = 0; rowCounter < 3; rowCounter++)
        for (int columnCounter = 0; columnCounter < 3; columnCounter++)
            cin >> matrix1[rowCounter][columnCounter];
    cout << "Enter the elements of Matrix 2 row-wise" << endl;
    for (int rowCounter = 0; rowCounter < 3; rowCounter++)
        for (int columnCounter = 0; columnCounter < 3; columnCounter++)
            cin >> matrix2[rowCounter][columnCounter];

    int **summatrix = add(matrix1, matrix2);
    int **prodmatrix = mul(matrix1, matrix2);

    cout << "Matrix 1 + Matrix 2 = " << endl;
    for (int rowCounter = 0; rowCounter < 3; rowCounter++)
    {
        for (int columnCounter = 0; columnCounter < 3; columnCounter++)
            cout << summatrix[rowCounter][columnCounter] << " ";
        cout << endl;
    }

    cout << "Matrix 1 * Matrix 2 = " << endl;
    for (int rowCounter = 0; rowCounter < 3; rowCounter++)
    {
        for (int columnCounter = 0; columnCounter < 3; columnCounter++)
            cout << prodmatrix[rowCounter][columnCounter] << " ";
        cout << endl;
    }

    for (int counter = 0; counter < 3; counter++)
        delete[] matrix2[counter];
    delete[] matrix2;
    for (int counter = 0; counter < 3; counter++)
        delete[] matrix1[counter];
    delete[] matrix1;
    return (0);
}