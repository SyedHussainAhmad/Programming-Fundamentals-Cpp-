//Question: Find the transpose of a matrix.

#include<iostream>
using namespace std;

void printMatrix(int arr[][3], int rows, int columns)
{
    for (int i = 0; i < rows; i= i + 1)
    {
        for (int j = 0; j < columns; j = j + 1)
        {
            cout << arr[i][j] << '\t';
        }
        cout << '\n';
    }
}

void getTranspose(int arr[][2], int rows, int columns,int transpose[][3])
{
    for (int i = 0; i < columns; i=i+1)
    {
        for (int j = 0; j < rows; j = j + 1)
        {
            transpose[i][j] = arr[j][i];
        }
    }
}

void getTransposeApp()
{
    const int rows = 3, columns = 2;
    int arr[rows][columns] = { {1,2},{3,4},{5,6} };
    int transpose[columns][rows];
    getTranspose(arr, rows, columns, transpose);
    printMatrix(transpose,columns,rows);
}

int main()
{
    getTransposeApp();
    cout << endl;
    return 0;
}