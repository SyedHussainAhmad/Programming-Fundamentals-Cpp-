#include<iostream>
using namespace std;

int findDivisor(int length)
{
    int divisor = 1;
    for (int i = 0; i < length; i = i + 1)
    {
        divisor = divisor * 10;
    }

    return divisor;
}

int numLength(int number)
{
    int counter = 0, remainder;
    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        counter = counter + 1;
    }
    return counter;
}

int isLeftBumpy(int num)
{
}

int isRightBumpy(int num)
{
}

int checkBumpyNumber(int num)
{
    int check1 = isLeftBumpy(num) ;
    int check2 = isRightBumpy(num);

    if (!check1 && !check2)
    {
        return 1;
    }
    else {
        return 0;
    }

}

int checkBumpyProportion(int bumpyNumber, int totalAmount)
{
    int bumpyProportion = totalAmount / bumpyNumber * 100;
    return bumpyProportion;
}
int main()
{
    int bumpyNumber = 21780;
    int bumpyProportion = 90;
    bool condition = true;

    while (condition)
    {
        bumpyNumber = bumpyNumber + 1;

        for (int i = 100; i < bumpyNumber; i = i + 1)
        {
            int amountOfBumpyNumbers = 0;

            int bumpyCheck = checkBumpyNumber(i);
            if (bumpyCheck)
            {
                amountOfBumpyNumbers = amountOfBumpyNumbers + 1;
            }
            bumpyProportion = checkBumpyProportion(bumpyNumber,amountOfBumpyNumbers);
        }

        if (bumpyProportion == 99)
        {
            condition = false;
            cout << bumpyNumber;
        }
    }
    cout << endl;
    return 0;
}