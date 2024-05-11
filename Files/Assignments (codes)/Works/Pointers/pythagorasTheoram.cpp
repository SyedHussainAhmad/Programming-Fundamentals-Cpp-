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
//        denominator = remainder;\a\
//        remainder = numenator % denominator;
//    }
//    return denominator;
//}
//
//bool isPythagorianTriplet(int base, int height, int hypotenuse)
//{
//    return ((base * base) + (height * height) == (hypotenuse * hypotenuse)) ? true : false;
//}
//
//void printPythagorianTriplet(int num = 500)
//{
//    for (int base = 1; base <= num; base=base+1)
//    {
//        for (int height = 1; height <= num; height=height+1)
//        {
//            for (int hypotenuse = 1; hypotenuse <= num; hypotenuse=hypotenuse+1)
//            {
//                if (isPythagorianTriplet(base, height, hypotenuse) && height > base && hypotenuse > height)
//                {
//                    int condition = ((GCD(base, height) == 1) && (GCD(height, hypotenuse) == 1));
//                    if(condition)
//                    {
//                        cout << "(" << base << "," << height << "," << hypotenuse << ")" << endl;
//                    }
//                }
//            }
//        }
//    }
//}
//
//void printPythagorianTripletApp()
//{
//    printPythagorianTriplet();
//}
//
//int main()
//{
//    printPythagorianTripletApp();
//    cout << endl;
//    return 0;
//}