#include<iostream>
using namespace std;

void printArrayElements(int arr[],int size)
{
    for (int i = 0; i < size; i=i+1)
    {
        cout << arr[i] << "  ";
    }
}

bool isELementFound(int* arr, int size, int number)
{
    for (int i = 0; i < size; i = i + 1)
    {
        if (number == arr[i])
        {
            return true;
        }
    }
    return false;
}

int getUnionSetSize(int * setA, int sizeA, int* setB)
{
    int unionSetSize = 0;
    for (int i = 0; i < sizeA; i = i + 1)
    {
        if (isELementFound(setA, sizeA, setB[i]))
        {
            unionSetSize = unionSetSize + 1;
        }
    }
    return unionSetSize;
}

int *getUnionSet(int *setA, int sizeA, int *setB, int sizeB, int * unionSetSize)
{
    *unionSetSize = sizeA + sizeB - getUnionSetSize(setA, sizeA, setB);
    int *unionSet = new int[*unionSetSize];

    int i;
    for ( i = 0; i < sizeA; i=i+1)
    {
        unionSet[i] = setA[i];
    }

    for (int j = 0; i < *unionSetSize; j=j+1)
    {
        if (!isELementFound(setA, sizeA, setB[j]))
        {
            unionSet[i] = setB[j];
            i = i + 1;
        }
    }
    return unionSet;
}

void getUnionSetApp()
{
	int setA[3] = { 0,1,2 };
	int setB[4] = { 2,3,4,5 };

    int unionSetSize = 0;
    int * unionSet = getUnionSet(setA,3,setB,4,&unionSetSize);
    printArrayElements(unionSet,unionSetSize);
}

int main()
{
	getUnionSetApp();
	cout << endl;
	return 0;
}