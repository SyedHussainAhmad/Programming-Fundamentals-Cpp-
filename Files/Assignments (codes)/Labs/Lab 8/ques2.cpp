//#include<iostream>
//using namespace std;
//
//int getNumberLength(int num)
//{
//    int length = 0;
//    num = num < 0? num * -1: num;
//
//    while (num > 0)
//    {
//        num = num / 10;
//        length = length + 1;
//    }
//    return length;
//}
//
//int getDivisor(int length)
//{
//    int divisor = 1;
//    for (int i = 1; i < length; i = i + 1)
//    {
//        divisor = divisor * 10;
//    }
//    return divisor;
//}
//
//int getLargestNDigitNumber(int length)
//{
//    int num = 0;
//    for (int i = 0; i < length; i = i + 1)
//    {
//        num = num * 10 + 9;
//    }
//    return num;
//}
//
//void changeKthDigit(int *num, int k, int d)
//{
//    if (k <= getNumberLength(*num))
//    {
//        bool condition = false;
//        if (*num < 0)
//        {
//            *num = *num * -1;
//            condition = true;
//        }
//
//        int divisor = getDivisor(getNumberLength(*num));
//        int counter = getNumberLength(*num) - 1;
//        int remainder, copyNum = 0;
//        while (*num > 0)
//        {
//            remainder = *num / divisor;
//            *num = *num % divisor;
//            divisor = divisor / 10;
//            if (counter == k)
//            {
//                remainder = d;
//            }
//            copyNum = copyNum * 10 + remainder;
//            counter = counter - 1;
//        }
//
//        *num = copyNum;
//        if (condition)
//        {
//            *num = *num * -1;
//        }
//    }
//}
//
//
//int main()
//{
//    int a = -400068;
//    changeKthDigit(&a,3,1);
//    cout << a;
//    //cout << getLargestNDigitNumber(6);
//    //cout << getNumberLength(a);
//    cout << endl;
//    return 0;
//}