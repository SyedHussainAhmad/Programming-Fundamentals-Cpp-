//#include<iostream>
//using namespace std;
//
//int findFabonacciSequence(int lastTerm)
//{
//    if (lastTerm == 1)
//    {
//        return 0;
//    }
//
//    int firstTerm = 0, secondTerm = 1, nextTerm = 1;
//
//    for (int i = 2; i < lastTerm; i = i + 1)
//    {
//        nextTerm = firstTerm + secondTerm;
//        firstTerm = secondTerm;
//        secondTerm = nextTerm;
//    }
//    return nextTerm;
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
//    for (int i = 1; i <= exponent; i = i + 1)
//    {
//        power = power * base;
//    }
//    return power;
//}
//
//int getSumOfSeries(int lastTerm)
//{
//    int singleTerm, sum = 0, sign = 1;
//    for (int i = 1; i < lastTerm; i=i+1)
//    {
//        singleTerm = getPower((findFabonacciSequence(i+1)), findFabonacciSequence(i));
//        if (sign%2==0)
//        {
//            singleTerm = singleTerm * -1;
//        }
//        sum = sum + singleTerm;
//    }
//    return sum;
//}
//
//void getSumOfSeriesApp()
//{
//    int lastTerm;
//    cout << "Enter the number of terms: ";
//    cin >> lastTerm;
//    cout << getSumOfSeries(lastTerm);
//}
//
//int main()
//{
//    getSumOfSeriesApp();
//    cout << endl;
//    return 0;
//}