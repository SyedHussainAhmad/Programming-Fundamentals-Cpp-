//#include<iostream>
//using namespace std;
//
//int numLength(int number)
//{
//    int counter = 0, remainder;
//    while (number > 0)
//    {
//        remainder = number % 10;
//        number = number / 10;
//        counter = counter + 1;
//    }
//    return counter;
//}
//
//int isPrime(int num)
//{
//    bool primeStatus = false;
//    
//        if (num == 2)
//        {
//            primeStatus = true;
//        }
//        else 
//        {
//            primeStatus = true;
//            int div = 2;
//            while (primeStatus && div < num)
//            {
//                if (num%div == 0) 
//                {
//                    primeStatus = false;
//                }
//                div = div + 1;
//            }
//        }
//    
//        if (primeStatus)
//        {
//            return 1;
//        }
//        else 
//        {
//            return 0;
//        }
//}
//
//int isTruncatable(long long int num)
//{
//    bool condition = true;
//
//
//    while(condition && num > 0)
//    {
//        int length = numLength(num);
//        int outerCounter = 1;
//        for (int i = 0; i < length; i = i + 1)
//        {
//            outerCounter = outerCounter * 10;
//        }
//
//        num = num / 10;
//        num = num % outerCounter;
//
//        int prime = isPrime(num);
//
//        if (!prime)
//        {
//            condition = false;
//        }
//    }
//    if (condition)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//
//}
//
//int main()
//{
//    long long int num;
//    cout << "Enter the number: ";
//    cin >> num;
//
//    int check = isTruncatable(num);
//
//    if (check)
//    {
//        cout << "It is Truncatable: ";
//    }
//    else
//    {
//        cout << "It is not Truncatable: ";
//    }
//
//    cout << endl;
//    return 0;
//}