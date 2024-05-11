#include<iostream>
using namespace std;

bool isUnique(int* arr, int size, int number)
{
    for (int i = 0; i < size; i = i + 1)
    {
        if (number==arr[i])
        {
            return false;
        }
    }
    return true;
}

bool checkUniqueElements(int arr[], int size)
{
    for (int i = 0; i < size; i=i+1)
    {
        if (!(isUnique(arr, i, arr[i])))
        {
            return  false;
        }
    }
    return true;
}

void checkUniqueElementsApp()
{
    int numberList[8] = { 0,1,2,3,4,5,6,7 };
    cout << (checkUniqueElements(numberList, 8) ? "Yes, It has Unique Elements." : "No, It do not have Unique Elements..");
}

int main()
{
    checkUniqueElementsApp();
    cout << endl;
    return 0;
}
