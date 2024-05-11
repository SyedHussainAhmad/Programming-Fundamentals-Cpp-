//#include<iostream>
//using namespace std;
//
//int rowSum(int arr[],int columns)
//{
//    int sum = 0;
//    for (int i = 0; i < columns; i= i+1)
//    {
//        sum = sum + arr[i];
//    }
//    return sum;
//}
//
//int columnSum(int arr[][3], int columnNo, int rows)
//{
//    int sum = 0;
//    for (int i = 0; i < rows; i= i+1)
//    {
//        sum = sum + arr[i][columnNo];
//    }
//    return sum;
//}
//
//int diagonalSum(int arr[][3], int rowNo)
//{
    //int sum = 0;
    //if (rowNo == 0)
    //{
    //    sum = arr[0][0] + arr[1][1] + arr[2][2];
    //}
    //else
    //{
    //    sum = arr[0][2] + arr[1][1] + arr[2][0];
    //}
    //return sum;
//}
//
//bool isLoShuMagicSquare(int arr[][3])
//{
//    int check = 0;
//    for (int i = 0; i < 2; i = i + 1)
//    {
//        if (columnSum(arr, i, 3) == columnSum(arr, i+1, 3) && rowSum(arr[i], 3) == rowSum(arr[i+1], 3) && columnSum(arr, i, 3) == rowSum(arr[i + 1], 3))
//        {
//            check = check + 1;
//        }
//    }
//    if (check == 2)
//    {
//        if (diagonalSum(arr,0) == diagonalSum(arr,3))
//        {
//            return true;
//        }
//    }
//    else
//    {
//        return false;
//    }
//}
//
//void isLoShuMagicSquareApp()
//{
//    int arr[3][3] = { {4,9,2}, {3,5,7}, {8,1,6} };
//    cout << isLoShuMagicSquare(arr);
//}
//
//int main()
//{
//    isLoShuMagicSquareApp();
//    cout << endl;
//    return 0;
//}