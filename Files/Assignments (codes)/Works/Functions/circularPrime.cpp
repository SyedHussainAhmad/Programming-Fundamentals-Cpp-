//#include<iostream>
//using namespace std;
//
//int numLength(int num)
//{
//    int length = 0;
//    while (num > 0)
//    {
//        length = length + 1;
//        num = num / 10;
//    }
//    return length;
//}
//
//int makeDivisor(int length)
//{
//        int divisor = 1;
//        for (int i = 1; i < length; i = i + 1)
//        {
//            divisor = divisor * 10;
//        }
//        return divisor;
//}
//
//bool isPrime(int num)
//{
//    bool primeStatus = false;
//
//    if (num == 2)
//    {
//        primeStatus = true;
//    }
//    else
//    {
//        primeStatus = true;
//        int div = 2;
//        while (primeStatus && div < num)
//        {
//            if (num % div == 0)
//            {
//                primeStatus = false;
//            }
//            div = div + 1;
//        }
//    }
//
//    return primeStatus ? true : false;
//}
//bool isCircularPrime(int num)
//{
//    int rotatedNum = num,length,digit;
//    int divisor = makeDivisor(numLength(num));
//    bool condition = true;
//
//    do
//    {
//        if (!isPrime(rotatedNum))
//        {
//            condition = false;
//        }
//        digit = rotatedNum / divisor;
//        rotatedNum = rotatedNum % divisor * 10 + digit;
//    } while (rotatedNum != num && condition);
//
//    return condition ? true : false;
//
//}
//void isCircularPrimeApp()
//{
//    int num;
//    cout << "Enter the number: ";
//    cin >> num;
//    cout << isCircularPrime(num);
//}
//int main()
//{
//    isCircularPrimeApp();
//    cout << endl;
//    return 0;
//}