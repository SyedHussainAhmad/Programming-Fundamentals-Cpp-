//#include<iostream>
//using namespace std;
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
//        cout << "mantissa " << mantissa << '\n';
//        cnt = cnt + 1;
//    }
//    return mantissa;
//}
//
//float binaryToFloatConversion(bool arr[])
//{
//    int sign = getPower(-1, arr[0]);
//    int exponent = getExponent(arr);
//    float mantissa = findMantissa(arr);
//    float floatNum = sign * exponent * mantissa;
//
//    return floatNum;
//}
//
//void binaryToFloatConversionApp()
//{
//    bool binaryArr[32] = { 1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
//    cout << binaryToFloatConversion(binaryArr);
//}
//
//int main()
//{
//    binaryToFloatConversionApp();
//    cout << endl;
//    return 0;
//}