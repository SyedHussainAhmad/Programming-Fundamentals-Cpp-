//#include<iostream>
//using namespace std;
//
//double truncateNumber(double num)
//{
//    return (int)num;
//}
//
//double ceilNumber(double num)
//{
//    if (num > 0)
//    {
//        return (int)num + 1;
//    }
//    else if (num < 0)
//    {
//        return (int)num - 1;
//    }
//}
//
//double floorNumber(double num)
//{
//    return (int)num;
//}
//
//double roundNumber(double num)
//{
//    double copyNum = (num - (int)num) * 10;
//
//    if (copyNum < 0)
//    {
//        copyNum = copyNum * -1;
//    }
//
//    if ((int)copyNum < 5)
//    {
//        return floorNumber(num);
//    }
//    else
//    {
//        return ceilNumber(num);
//    }
//
//}
//
//int main()
//{
//    double num;
//    cout << "Enter the number: ";
//    cin >> num;
//
//    cout << truncateNumber(num);
//    cout << ceilNumber(num);
//    cout << floorNumber(num);
//    cout << roundNumber(num);
//
//    cout << endl;
//    return 0;
//}