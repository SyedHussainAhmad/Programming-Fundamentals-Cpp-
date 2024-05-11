//#include<iostream>
//using namespace std;
//
//int reverseNum(int num)
//{
//    int reverseNumber = 0, remainder;
//
//    while (num>0)
//    {
//        remainder = num % 10;
//        reverseNumber = reverseNumber * 10 + remainder;
//        num = num / 10;
//    }
//
//    return reverseNumber;
//}
//
//int getPower(int base, int exponent)
//{
//    if (exponent == 0)
//    {
//        return 1;
//    }
//
//    int power = 1;
//    for (int i = 1; i <= exponent; i=i+1)
//    {
//        power = power * base;
//    }
//    return power;
//}
//
//int convertToDecimal(int inputBase, int number)
//{
//    int remainder;
//    int decimalNumber = 0, exponent = 0,power;
//    while (number > 0)
//    {
//        power = getPower(inputBase, exponent);
//        remainder = number % 10;
//        decimalNumber = decimalNumber + power * remainder;
//        exponent = exponent + 1;
//        number = number / 10;
//    }
//    return decimalNumber;
//}
//
//int convertNumberBase(int inputBase, int number, int targetBase)
//{
//    if (inputBase == targetBase)
//    {
//        return number;
//    }
//    else
//    {
//        int deicimalNumber = (inputBase != 10) ? convertToDecimal(inputBase, number) : number;
//        int remainder, reverseBaseBNumber = 0;
//
//        while (deicimalNumber>0)
//        {
//            remainder = deicimalNumber % targetBase;
//            reverseBaseBNumber = reverseBaseBNumber * 10 + remainder;
//            deicimalNumber = deicimalNumber / targetBase;
//        }
//        int targetBaseNumber = reverseNum(reverseBaseBNumber);
//        return targetBaseNumber;
//    }
//}
//void convertNumberBaseApp()
//{
//    int number, inputBase, targetBase;
//    cout << "Enter the base of the number you want to enter: ";
//    cin >> inputBase;
//    cout << "Enter the number: ";
//    cin >> number;
//    cout << "Enter the base of the number you want to convert: ";
//    cin >> targetBase;
//    cout << convertNumberBase(inputBase,number,targetBase);
//}
//
//int main()
//{
//    convertNumberBaseApp();
//    cout << endl;
//    return 0;
//}