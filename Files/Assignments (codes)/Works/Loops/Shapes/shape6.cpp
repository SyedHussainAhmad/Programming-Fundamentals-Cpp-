//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int rows;
//
//    cout << "Enter the number of rows : ";
//    cin >> rows;
//    rows = rows * 2 - 1;
//    int columns = 1;
//
//    for (int i = 1; i <= rows; i = i + 1)
//    {
//        int upperCounter = 1, endCounter = columns, numberToBePrinted = 1;
//        for (int j = 1; j <= columns; j = j + 1)
//        {
//            if (j == upperCounter || j == endCounter)
//            {
//                cout << numberToBePrinted;
//                upperCounter = upperCounter + 1;
//                endCounter = endCounter - 1;
//            }
//
//            if (j < columns / 2 + 1)
//            {
//                numberToBePrinted = numberToBePrinted + 1;
//            }
//            else
//            {
//                numberToBePrinted = numberToBePrinted - 1;
//            }
//        }
//        cout << '\n';
//        if (i <= rows / 2)
//        {
//            columns = columns + 2;
//        }
//        else
//        {
//            columns = columns - 2;
//        }
//    }
//    cout << endl;
//    return 0;
//}
