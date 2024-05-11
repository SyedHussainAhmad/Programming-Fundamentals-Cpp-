//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int rows;
//
//    cout << "Enter the number of rows : ";
//    cin >> rows;
//
//    int columns = (rows - 1) * 2 + 1;
//    int check1 = columns / 2 + 1;
//    int check2 = columns / 2 + 1;
//    for (int i = 1; i <= rows; i = i + 1)
//    {
//        char alphabet = 'A';
//        for (int j = 1; j <= columns; j = j + 1)
//        {
//            if (j > check1 && j < check2)
//            {
//                cout << " ";
//            }
//            else
//            {
//                cout << alphabet;
//            }
//            alphabet = j >= rows? alphabet - 1: alphabet + 1;
//        }
//        check1 = check1 - 1; 
//        check2 = check2 + 1; 
//        cout << '\n';
//    }
//    cout << endl;
//    return 0;
//}