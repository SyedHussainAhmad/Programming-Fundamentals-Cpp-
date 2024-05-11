//#include<iostream>
//using namespace std;
//
//
//void deleteMat(const int* const* mat, int rows)
//{
//	for (int i = 0; i < rows; i = i + 1)
//	{
//		delete[] mat[i];
//	}
//	delete[] mat;
//}
//
//void printMat(const int* const* mat, const int rows,const int columns)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < columns; j++)
//		{
//			cout << mat[i][j] << ' ';
//		}
//		cout << endl;
//	}
//}
//
//
//int ** getRotatedMatrix(const int * const *mat, int rows,int columns,int *newRows,int* newColumns)
//{
//	*newRows = columns;
//	*newColumns = rows;
//	int** rotatedMat = new int* [*newRows];
//	for (int i = 0; i < *newRows; i = i + 1)
//	{
//		rotatedMat[i] = new int[*newColumns];
//	}
//
//	for (int i = 0; i < *newRows; i = i + 1)
//	{
//		int k = rows-1, l = i;
//		for (int j = 0; j < *newColumns; j = j + 1)
//		{
//			rotatedMat[i][j] = mat[k][l];
//			k = k - 1;
//		}
//		l = l + 1;
//	}
//	return rotatedMat;
//}
//
//int main()
//{
//	const int rows = 4, columns = 4;
//	int** mat = new int* [rows];
//	for (int i = 0; i < rows; i=i+1)
//	{
//		mat[i] = new int[columns];
//	}
//
//	int k = 1;
//	for (int i = 0; i < rows; i=i+1)
//	{
//		for (int j = 0; j < columns; j=j+1)
//		{
//			mat[i][j] = k;
//			k = k + 1;
//		}
//	}
//
//	int newRows, newColumns;
//	printMat(mat,rows,columns);
//	cout << '\n';
//	int ** resultantMat = getRotatedMatrix(mat,rows,columns,&newRows,&newColumns);
//	deleteMat(mat, rows);
//	printMat(resultantMat,newRows,newColumns);
//	deleteMat(resultantMat, newRows);
//
//	cout << endl;
//	return 0;
//}
//
