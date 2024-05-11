//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int rows = 5;
//
//    cout << "Enter the number of rows : ";
//    cin >> rows;
//    int columns = rows, counter = 1, reverseCounter = 0;
//
//    for (int i = 1; i <= rows; i = i + 1)
//    {
//        if (i % 2 == 0)
//        {
//            reverseCounter = counter + 4;
//            counter = counter + 5;
//        }
//
//        for (int j = 1; j <= columns; j = j + 1)
//        {
//            if (counter <= 10 && reverseCounter <= 10)
//            {
//                if (i % 2 == 0)
//                {
//                    cout << reverseCounter << "  ";
//                    reverseCounter = reverseCounter - 1;
//                }
//                else
//                {
//                    cout << counter << "  ";
//                    counter = counter + 1;
//                }
//            }
//            else
//            {
//                if (i % 2 == 0)
//                {
//                    cout << reverseCounter << " ";
//                    reverseCounter = reverseCounter - 1;
//                }
//                else
//                {
//                    cout << counter << " ";
//                    counter = counter + 1;
//                }
//            }
//        }
//        cout << '\n';
//    }
//    cout << endl;
//    return 0;
//}