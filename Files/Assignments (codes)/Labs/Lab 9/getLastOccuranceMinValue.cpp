#include<iostream>
using namespace std;

int getLastOccuranceMinValue(int arr[], int size)
{
    int minValue = arr[0];
    int minIndex = 0;
    for (int i = 0; i < size; i = i + 1)
    {
        if (arr[i] <= minValue)
        {
            minValue = arr[i];
            minIndex = i;
        }
    }
    return minIndex;
}

void getLastOccuranceMinValueApp()
{
    int numberList[8] = { 10,12,9,78,90,9,78,90 };
    cout << getLastOccuranceMinValue(numberList, 8);
}
int main()
{
    getLastOccuranceMinValueApp();
    cout << endl;
    return 0;
}