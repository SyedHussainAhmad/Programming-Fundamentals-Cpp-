#include<iostream>
using namespace std;

float getPower(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    bool negFlag = false;
    if (exponent<0)
    {
        negFlag = true;
        exponent = exponent * -1;
    }

    float power = 1;
    for (int i = 0; i < exponent; i = i + 1)
    {
        power = power * base;
    }
    return (negFlag ? 1 / power : power);
}

void copySet(int *set, int *powerSet, int size)
{
    for (int i = 0; i < size; i=i+1)
    {
        powerSet[i] = set[i];
    }
}

int getArraySize(int num)
{
    if (num < 2)
    {
        return 1;
    }
    int size = 0;
    while (num > 0)
    {
        num = num / 2;
        size = size + 1;
    }
    return size;
}

int * getBinaryArray(int num, int*size)
{
    int sizeForBinaryArray = getArraySize(num);
    int* binaryArr = new int[sizeForBinaryArray];
    while (num > 0)
    {
        binaryArr[sizeForBinaryArray - 1] = num % 2;
        num = num / 2;
        sizeForBinaryArray = sizeForBinaryArray - 1;
        *size = *size + 1;
    }
    return binaryArr;
}

int* getPowerSet(int* set, int size, int powerSetSize)
{
    int* powerSet = new int[size*2];
    copySet(set,powerSet,size);

    for (int i = size, k = size; i < powerSetSize; i=i+1)
    {
        int binarySize = 0;
        int *binaryArray = getBinaryArray(i,&binarySize);
        for (int j = 0; j < binarySize; j=j+1)
        {
            if (binaryArray[j] == 1)
            {
                powerSet[k] = set[j];
                k = k + 1;
            }
        }
    }
    return powerSet;
}

void getPowerSetApp()
{
    const int size = 4;
    int set[size] = { 1,2,3,4 };
    int powerSetSize = getPower(2, size);
    int * powerSet = getPowerSet(set, size, powerSetSize);

    //for (int i = 0; i < powerSetSize*2; i++)
    //{
    //    cout << powerSet[i] << " ";
    //}
}
int main()
{
    getPowerSetApp();
    cout << endl;
    return 0;
}