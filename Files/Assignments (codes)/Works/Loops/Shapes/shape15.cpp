//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int rows;
//    cout << "Enter the number of rows : ";
//    cin >> rows;
//    int columns = rows;
//
//    for (int i = 1; i <= rows; i = i + 1)
//    {
//
//        int multiplier;
//        if (i % 2 != 0)
//        {
//            multiplier = 2;
//        }
//        else
//        {
//            multiplier = 3;
//        }
//
//        for (int j = 1; j <= columns; j = j + 1)
//        {
//            if (j == 1)
//            {
//                cout << 1 << " ";
//            }
//            else
//            {
//                cout << multiplier * multiplier << " ";
//                multiplier = multiplier + 2;
//            }
//        }
//        columns = columns - 1;
//        cout << '\n';
//    }
//    cout << endl;
//    return 0;
//}