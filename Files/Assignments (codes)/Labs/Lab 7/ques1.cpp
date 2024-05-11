//#include<iostream>
//using namespace std;
//
//int numberCheck(int copyCounter)
//{
//    int remainder, product = 1;
//    while (copyCounter > 0)
//    {
//        remainder = copyCounter % 10;
//        product = product * remainder;
//        copyCounter = copyCounter / 10;
//    }
//    return product;
//}
//int main()
//{
//    int num;
//    cout << "Enter the number: ";
//    cin >> num;
//    bool condition = true;
//    int counter = 9;
//    int innerCounter = 0;
//    while (condition && counter < 100000)
//    {
//        counter = counter + 1;
//        int copyCounter = counter;
//        int product = numberCheck(copyCounter);
//        
//        if (product == num)
//        {
//            condition = false;
//            innerCounter = innerCounter + 1;
//            cout << counter;
//        }
//    }
//
//    if (innerCounter == 0)
//    {
//        cout << "Not Possible";
//    }
//    cout << endl;
//    return 0;
//}