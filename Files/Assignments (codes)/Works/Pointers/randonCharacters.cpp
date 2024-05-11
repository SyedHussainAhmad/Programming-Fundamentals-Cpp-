#include<iostream>
using namespace std;

int getRandomNumber(int lowestNumber,int largestNumber)
{
    int range = lowestNumber + rand() % (largestNumber - lowestNumber + 1);
    return range;
}

char getRandomCapitalAlpha()
{
    char capitalAplpha = getRandomNumber(65,90);
    return capitalAplpha;
}

char getRandomSmallAlpha()
{
    char smallAlpha = getRandomNumber(97, 122);
    return smallAlpha;
}

char getRandomDigit()
{
    char digit = getRandomNumber(48, 57);
    return digit;
}

char getRandomAlphaNumeric()
{
    int range = getRandomNumber(1, 3);
    if (range == 1)
    {
        return getRandomCapitalAlpha();
    }
    else if (range == 2)
    {
        return getRandomSmallAlpha();
    }
    else
    {
        return getRandomDigit();
    }
}

void getRandomSymbolsApp()
{
    char input,condition;
    do
    {
        cout << "~~~Welcome to Random Symbols Generator App~~~\n";
        cout << "Press 1 to generate Random Capital Alphabet (A-Z)\n";
        cout << "Press 2 to generate Random Small Alphabet (a-z)\n";
        cout << "Press 3 to generate Random Digit (0-9)\n";
        cout << "Press 4 to generate Random AlphaNumerics (A-Z or a-z or 0-9) \n";
        cout << "Press any other key to exit.\n";

        cin >> input;

        if (input == '1')
        {
            cout << getRandomCapitalAlpha() << endl;;
        }

        else if (input == '2')
        {
            cout << getRandomSmallAlpha() << endl;
        }

        else if (input == '3')
        {
            cout << getRandomDigit() << endl;
        }

        else if (input == '4')
        {
            cout << getRandomAlphaNumeric() << endl;
        }

        else
        {
            exit(0);
        }
        
        cout << "Do you want to restart the Application (Y/N): ";
        cin >> condition;
    }
    while (condition == 'Y');
}

int main()
{
    srand(time(0));
    getRandomSymbolsApp();
    cout << endl;
    return 0;
}