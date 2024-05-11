//#include<iostream>
//using namespace std;
//
//void print32BitRepresentationIEEE754(bool arr[])
//{
//    cout << "SB   " << "Exponent     " << "Mantissa" << '\n';
//    for (int i = 0; i < 32; i=i+1)
//    {
//        if (i == 0 || i == 8)
//        {
//            cout << arr[i] << "    ";
//        }
//        else if (i % 4 == 0 && i < 10 || i == 11 || i == 15 || i == 19 || i == 23 || i == 27)
//        {
//            cout << arr[i] << " ";
//        }
//        else
//        {
//            cout << arr[i];
//        }
//    }
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
//    for (int i = 0; i < exponent; i = i + 1)
//    {
//        power = power * base;
//    }
//    return power;
//}
//
//int convertBinaryToDecimal(bool arr[], int startingBit, int endingBit)
//{
//    int decimalNum = 0, cnt = 0;
//    for (int i = endingBit; i >= startingBit; i = i - 1)
//    {
//        decimalNum = decimalNum + arr[i] * getPower(2, cnt);
//        cnt = cnt + 1;
//    }
//    return decimalNum;
//}
//
//int getExponent(bool arr[])
//{
//    int exponent = convertBinaryToDecimal(arr, 1, 8);
//    exponent < 0 ? exponent = exponent * (-1), exponent = 1 / (getPower(2, (exponent - 127))) : exponent = getPower(2, (exponent - 127));
//    return exponent;
//}
//
//float findMantissa(bool arr[])
//{
//    double mantissa = 1, cnt = 1;
//    for (int i = 9; i <= 32; i = i + 1)
//    {
//        mantissa = mantissa + arr[i] * (1.0 / (getPower(2, cnt)));
//        cnt = cnt + 1;
//    }
//    return mantissa;
//}
//
//float getFloatingPointValueIEEE754(bool arr[])
//{
//    int sign = getPower(-1, arr[0]);
//    int exponent = getExponent(arr);
//    float mantissa = findMantissa(arr);
//    float floatNum = sign * exponent * mantissa;
//
//    return floatNum;
//}
//
//
//void initializeSignBit(float number, bool arr[])
//{
//    arr[0] = number > 0 ? false : true;
//}
//
//void initializeArray(bool arr[], int size, int size2)
//{
//    for (int i = size; i < size2; i = i + 1)
//    {
//        arr[i] = false;
//    }
//}
//
//void decimalToBinaryIntegralPart(int num, bool arr[], int* size)
//{
//    int i = 0;
//    while (num > 0)
//    {
//        arr[i] = num % 2;
//        i = i + 1;
//        num = num / 2;
//    }
//    *size = i;
//}
//
//void getDecimalToBinaryIntegralPart(int num, bool arr[], int* size)
//{
//    bool binaryArr[23];
//    decimalToBinaryIntegralPart(num, binaryArr, size);
//    int cnt = 9;
//    for (int i = 2; i <= *size; i = i + 1)
//    {
//        arr[cnt] = binaryArr[*size - i];
//        cnt = cnt + 1;
//    }
//}
//
//
//void getDecimalToBinaryDecimalPart(int integralPart, float decimalPart, bool arr[], int* size)
//{
//    int cnt = 8 + *size;
//    initializeArray(arr, cnt, 32);
//    bool zeroFlag = true;
//    int exponentCounter = 0;
//
//    while (decimalPart != 1.0 && cnt < 32)
//    {
//        if (integralPart == 0 && zeroFlag)
//        {
//            while ((int)decimalPart != 1)
//            {
//                decimalPart = decimalPart < 1.0 ? decimalPart * 2 : (decimalPart - 1.0) * 2;
//                exponentCounter = exponentCounter + 1;
//            }
//            zeroFlag = false;
//        }
//        decimalPart = decimalPart < 1.0 ? decimalPart * 2 : (decimalPart - 1.0) * 2;
//        arr[cnt] = (int)decimalPart;
//        cnt = cnt + 1;
//    }
//    *size = exponentCounter;
//}
//
//
//void getExponent(int num, bool arr[])
//{
//    bool binaryArr[8];
//    initializeArray(binaryArr, 1, 8);
//    int size = 8, cnt = 1;
//    decimalToBinaryIntegralPart(num, binaryArr, &size);
//    for (int i = 7; i >= 0; i = i - 1)
//    {
//        arr[cnt] = binaryArr[i];
//        cnt = cnt + 1;
//    }
//}
//
//void convertFloatingPointValueTo32BitRepresentationIEEE754(float number, bool arr[])
//{
//
//    initializeSignBit(number, arr);
//    number = number < 0 ? number * -1 : number;
//    int integralPart = number;
//    float decimalPart = number - integralPart;
//
//    int size = 1;
//    if (integralPart != 0)
//    {
//        getDecimalToBinaryIntegralPart(integralPart, arr, &size);
//    }
//    int exponent = 127 + (size - 1);
//    getDecimalToBinaryDecimalPart(integralPart, decimalPart, arr, &size);
//    exponent = exponent - size;
//    getExponent(exponent, arr);
//}
//
//
//int main()
//{
//    /*bool arr[32] = { 0,1,0,0,0,0,0,1,0,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
//    print32BitRepresentationIEEE754(arr);
//
//    float val = getFloatingPointValueIEEE754(arr);
//    cout << "\nFloating Point Value = " << val << '\n';*/
//
//    bool res[32];
//    convertFloatingPointValueTo32BitRepresentationIEEE754(0.67,res);
//    print32BitRepresentationIEEE754(res);
//
//    cout << endl;
//    return 0;
//}