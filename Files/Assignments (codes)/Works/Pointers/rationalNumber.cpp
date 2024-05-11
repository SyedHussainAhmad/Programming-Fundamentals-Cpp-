//#include<iostream>
//using namespace std;
//
//int GCD(int num1, int num2)
//{
//    int numenator, denominator;
//    num1 < num2 ? (denominator = num1, numenator = num2) : (denominator = num2, numenator = num1);
//
//    int remainder = numenator % denominator;
//    while (remainder > 0)
//    {
//        numenator = denominator;
//        denominator = remainder;
//        remainder = numenator % denominator;
//    }
//    return denominator;
//}
//
//void reduceFraction(int * numenator, int * denominator)
//{
//    int divisor = GCD(*numenator, *denominator);
//
//    *numenator = *numenator / divisor;
//    *denominator = *denominator / divisor;
//}
//
//void printsSimplifiedFraction(int numenator, int denominator)
//{
//    if (numenator == 0)
//    {
//        cout << 0;
//    }
//    else if (denominator == 0)
//    {
//        cout << "Infinity";
//    }
//    else if (denominator == 1)
//    {
//        reduceFraction(&numenator, &denominator);
//        cout << numenator;
//    }
//    else if (GCD(numenator,denominator)==1)
//    {
//        int remainder = numenator % denominator;
//        int divisor = numenator / denominator;
//        cout << divisor << " " << remainder << "/" << denominator;
//    }
//    else
//    {
//        reduceFraction(&numenator, &denominator);
//        cout << numenator << "/" << denominator;
//    }
//}
//
//void simplifyFractionApp()
//{
//    int numenator,denominator;
//    cout << "Enter the Numenator: ";
//    cin >> numenator;
//    cout << "Enter the Denominator: ";
//    cin >> denominator;
//    printsSimplifiedFraction(numenator, denominator);
//}
//
//int main()
//{
//    simplifyFractionApp();
//    cout << endl;
//    return 0;
//}