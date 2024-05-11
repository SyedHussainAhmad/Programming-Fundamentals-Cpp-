#include<iostream>
using namespace std;

void printArray(int* arr, int size)
{
    for (int i = 0; i < size; i = i + 1)
    {
        cout << arr[i] << " ";
    }
}

void randomElementsGenerator(int arr[], int size)
{
    for (int i = 0; i < size; i = i + 1)
    {
        arr[i] = 1 + rand() % 9;
    }
}

void inputArrayElements(int* arr, int size)
{
    for (int i = 0; i < 5; i = i + 1)
    {
        cin >> arr[i];
    }
}

int searchElement(int *arr, int num, int *elementPosition, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            *elementPosition = i;
            return arr[i];
        }
    }
}

bool isCorrectPassword(int *pinNumber, int *pin, int *randomArr, int *inputPin , int pinSize)
{
    for (int i = 0; i < pinSize; i++)
    {
        int elementPosition;
        if (inputPin[i] == searchElement(randomArr,inputPin[i], & elementPosition, 10))
        {
            if (pinNumber[elementPosition] == pin[i])
            {
                return true;
            }
        }
    }
    return false;
}

void passwordRandomizerApp()
{
    int pinNumber[5] = { 1,2,3,4,5 };
    int pin[10] = { 0,1,2,3,4,5,6,7,8,9 };
    int inputPin[5];
    int num[10];

    randomElementsGenerator(num,10);
    printArray(pin,10);
    cout << '\n';
    printArray(num,10);
    cout << '\n';
    inputArrayElements(inputPin,5);
    cout << (isCorrectPassword(pinNumber, pin, num, inputPin, 5)? "Your password is correct.": "Your password is not correct.");
}

int main()
{
    srand(time(0));
    passwordRandomizerApp();
    cout << endl;
    return 0;
}