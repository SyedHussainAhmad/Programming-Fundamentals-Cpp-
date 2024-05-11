#include<iostream>
using namespace std;
void rotateMatrix(int array[][4], int size)
{
	int N = 1;
	int size2 = size;
	while (size2 / 2)
	{
		int temp = array[size - N][size - N];
		for (int i = size - N, j = size - N; i > 0; i = i - 1)
		{
			array[i][j] = array[i - 1][j];
		}
		for (int i = N - 1, j = size - N; j > 0; j = j - 1)
		{
			array[i][j] = array[i][j - 1];
		}
		for (int i = N - 1, j = N - 1; i < size - N; i = i + 1)
		{
			array[i][j] = array[i + 1][j];
		}
		for (int i = size - N, j = N - 1; j < size - N; j = j + 1)
		{
			if (i == size - N && j == size - N - 1)
			{
				array[i][j] = temp;
			}
			else
			{
				array[i][j] = array[i][j + 1];
			}
		}
		N = N + 1;
		size2 = size2 / 2;
	}
}
int main()
{
	const int size = 4;
	int array[size][size] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	rotateMatrix(array, size);
	cout << endl;
	return 0;
}