//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int rows = 11;;
//
//    //cout << "Enter the number of rows : ";
//    //cin >> rows;
//    int columns = rows * 2 - 1;
//    int check1 = columns / 2 + 1;
//    int check2 = columns / 2 + 1;
//
//    for (int i = 1; i <= rows; i = i + 1)
//    {
//        for (int j = 1; j <= columns; j = j + 1)
//        {
//            cout << ((j == check1 || j == check2) ? "*" : " ");
//        }
//
//        check1 = (i > rows / 2)? check1 + 2: check1 - 2;
//        check2 = (i > rows / 2)? check2 - 2: check2 + 2;
//        cout << '\n';
//    }
//    cout << endl;
//    return 0;
//}