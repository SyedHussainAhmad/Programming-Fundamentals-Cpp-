#include<iostream>
using namespace std;

bool isSparseNum(int num)
{
    int remainder1, remainder2, remainder3;
    bool sparseCheck = true;
    remainder1 = num % 2;
    num = num / 2;
    remainder2 = num % 2;
    num = num / 2;

    if (remainder1 == 1 &&  remainder2 == 1)
    {
        return false;
    }

    while (num>0 && sparseCheck)
    {
        remainder3 = num % 2;
        num = num / 2;

        if (remainder2 ==  1 && remainder3 == 1)
        {
            sparseCheck = false;
        }

        remainder2 = remainder3;
        return sparseCheck;
    }
}

int findSparseNumber(int num)
{
    bool condition = false;
    while (!condition)
    {
        condition = isSparseNum(num);
        num = (condition ? num : num + 1);
    }
    return num;
}

void findSparseNumberApp()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    cout << findSparseNumber(num);
}

int main()
{
    findSparseNumberApp();
    cout << endl;
    return 0;
}