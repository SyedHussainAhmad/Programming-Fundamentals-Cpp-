#include<iostream>
using namespace std;

struct Matrix
{
	int** data;
    int rows;
    int columns;
};

void deleteMat(Matrix mat)
{
	for (int i = 0; i < mat.rows; i = i + 1)
	{
		delete[] mat.data[i];
	}
	delete[] mat.data;
	mat.data = nullptr;
}

void printMat(const Matrix mat)
{
	for (int i = 0; i < mat.rows; i++)
	{
		for (int j = 0; j < mat.columns; j++)
		{
			cout << mat.data[i][j] << ' ';
		}
		cout << endl;
	}
}

Matrix getRotatedMatrix(Matrix mat1)
{
    Matrix mat;
	mat.rows = mat1.columns;
	mat.columns = mat1.rows;

	mat.data = new int* [mat.rows];
	for (int i = 0; i < mat.rows; i = i + 1)
	{
		mat.data[i] = new int[mat.columns];
	}

	for (int i = 0; i < mat.rows; i = i + 1)
	{
		int k = mat1.rows - 1, l = i;
		for (int j = 0; j < mat.columns; j = j + 1)
		{
			mat.data[i][j] = mat1.data[k][l];
			k = k - 1;
		}
		l = l + 1;
	}
    return mat;
}

int main()
{
    Matrix mat;
	mat.rows = 5;
	mat.columns = 4;
	mat.data = new int* [mat.rows];
	for (int i = 0; i < mat.rows; i = i + 1)
	{
		mat.data[i] = new int[mat.columns];
	}

	int k = 1;
	for (int i = 0; i < mat.rows; i=i+1)
	{
		for (int j = 0; j < mat.columns; j=j+1)
		{
			mat.data[i][j] = k;
			k = k + 1;
		}
	}

	printMat(mat);
	cout << '\n';
    Matrix resulatantMat = getRotatedMatrix(mat);
	deleteMat(mat);
	printMat(resulatantMat);
	deleteMat(resulatantMat);

	cout << endl;
    return 0;
}