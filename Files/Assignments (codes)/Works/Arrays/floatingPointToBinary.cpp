//#include<iostream>
//using namespace std;
//
//void printArray(bool * arr, int size)
//{
//    for (int i = 0; i < size; i = i + 1)
//    {
//        cout << arr[i] << ", ";
//    }
//}
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
//        if (integralPart==0 && zeroFlag)
//        {
//            while ((int)decimalPart!= 1)
//            {
//                decimalPart = decimalPart < 1.0 ? decimalPart * 2 : (decimalPart - 1.0) * 2;
//                cout << decimalPart << " decimalPart" << endl;
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
//    initializeArray(binaryArr,1,8);
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
//    if (integralPart!=0)
//    {
//        getDecimalToBinaryIntegralPart(integralPart, arr, &size);
//    }
//    int exponent = 127 + (size - 1);
//    getDecimalToBinaryDecimalPart(integralPart,decimalPart, arr, &size);
//    exponent = exponent - size;
//    getExponent(exponent, arr);
//}
//
//int main()
//{
//    bool arr[32];
//    convertFloatingPointValueTo32BitRepresentationIEEE754(0.7,arr);
//    printArray(arr,32);
//    cout << endl;
//    return 0;
//}
