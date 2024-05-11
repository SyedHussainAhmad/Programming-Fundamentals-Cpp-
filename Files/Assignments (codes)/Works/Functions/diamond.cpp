//#include<iostream>
//using namespace std;
//
//void displayDiamond(int rows)
//{
//    int cnt1 = rows / 2 + 1;
//    int cnt2 = rows / 2 + 1;
//
//    for (int i = 1; i <= rows; i = i + 1)
//    {
//        for (int j = 1; j <= rows; j = j + 1)
//        {
//            cout << ((j >= cnt1 && j <= cnt2) ? "*" : " ");
//        }
//        if (i < rows/2 + 1)
//        {
//            cnt1 = cnt1 - 1;
//            cnt2 = cnt2 + 1;
//        }
//        else
//        {
//            cnt1 = cnt1 + 1;
//            cnt2 = cnt2 - 1;
//        }
//
//        cout << endl;
//    }
//}
//
//void displayDiamondApp()
//{
//    int rows;
//    cout << "Enter the heigth: ";
//    cin >> rows;
//    displayDiamond(rows);
//}
//int main()
//{
//    displayDiamondApp();
//    cout << endl;
//    return 0;
//}