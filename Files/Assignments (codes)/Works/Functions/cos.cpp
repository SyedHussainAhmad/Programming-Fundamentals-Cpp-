//#include<iostream>
//using namespace std;
//
//int findPower(int num, int exponent)
//{
//    int power = 1;
//    for (int i = 0; i < exponent; i = i + 1)
//    {
//        power = power * num;
//    }
//    return power;
//}
//
//int findFactorial(int num)
//{
//    int factorial = 1;
//    for (int i = 1; i <= num; i = i+1)
//    {
//        factorial = factorial * i;
//    }
//    return factorial;
//}
//
//int findCosine(int num, int lastTerm)
//{
//    int sum = 1;
//    int sign = 1;
//    int exponent = 2;
//
//    for (int i = 1; i < lastTerm; i = i+1)
//    {
//        int numenator = findPower(num, exponent);
//        int denominator = findFactorial(exponent);
//        float singleTerm = (float)numenator / denominator;
//
//        if (sign % 2 != 0)
//        {
//            singleTerm = singleTerm * -1;
//        }
//
//        sum = sum + singleTerm;
//        exponent = exponent + 2;
//        sign = sign + 1;
//    }
//    return sum;
//}
//
//void findCosineApp()
//{
//    int num, lastTerm;
//    cout << "Enter x: ";
//    cin >> num;
//    cout << "Enter N: ";
//    cin >> lastTerm;
//    cout << findCosine(num, lastTerm);
//}
//
//int main()
//{
//    findCosineApp();
//    cout << endl;
//    return 0;
//}