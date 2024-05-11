#include<iostream>
using namespace std;

int* getUnion(const int* const a, const int sizeA, const int* const b, const int sizeB)
{
	int count = 0;
	for (int i = 0; i < sizeA; i = i + 1)
	{
		for (int j = 0; j < sizeB; j = j + 1)
		{
			if (a[i] == b[j])
			{
				count = count + 1;
			}
		}
	}
	int i = 0;
	int* unSet = new int[sizeA + sizeB - count];
	bool present = true;
	while (i < sizeA)
	{
		unSet[i] = a[i];
		i = i + 1;
	}
	for (int j = 0; j < sizeB; j = j + 1)
	{
		for (int k = 0; k < sizeA; k = k + 1)
		{
			if (b[j] == a[k])
			{
				present = true;
			}
		}
		if (present == false)
		{
			unSet[i] = b[j];
			i = i + 1;
		}
	}
	return unSet;
}

int main()
{
	int* b;
	int a[4] = { 1,2,3,4 }, c[4] = { 3,4,5,6 };
	b = getUnion(a, 4, c, 4);
	for (int i = 0; i < 6; i = i + 1)
	{
		cout << b[i] << "  ";
	}
	return 0;
}