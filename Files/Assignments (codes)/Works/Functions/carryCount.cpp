//#include<iostream>
//using namespace std;
//
//
//int countCarrys(int num1, int num2)
//{
//    int carryCounts = 0, remainder1,remainder2,remainderSum,addValue = 0;
//    while (num1 > 0 || num2 > 0)
//    {
//        remainder1 = num1 % 10;
//        num1 = num1 / 10;
//
//        remainder2 = num2 % 10;
//        num2 = num2 / 10;
//
//        remainderSum = remainder1 + remainder2 + addValue;
//
//        if (remainderSum > 10)
//        {
//            carryCounts = carryCounts + 1;
//            addValue = remainderSum % 10;
//        }
//    }
//
//    return carryCounts;
//}
//void countCarrysApp()
//{
//    int num1, num2;
//    cout << "Enter first integer: ";
//    cin >> num1;
//    cout << "Enter second integer: ";
//    cin >> num2;
//
//    cout << "The number of carry counts are: " << countCarrys(num1, num2);
//}
//int main()
//{
//    countCarrysApp();
//    cout << endl;
//    return 0;
//}