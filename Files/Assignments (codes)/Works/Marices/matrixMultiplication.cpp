//#include<iostream>
//using namespace std;
//
//int ** multiplyMatrices(int matrix1[][2], int rows1, int columns1, int matrix2[][2], int rows2, int columns2, int * rows3, int *columns3)
//{
//    *rows3 = rows1;
//    *columns3 = columns2;
    //int ** resultantMatrix = new int *[*rows3];
    //for (int i = 0; i < rows1; i=i+1)
    //{
    //    resultantMatrix[i] = new int[*columns3];
    //}
//    for (int i = 0; i < rows1; i=i+1)
//    {
//        for (int j = 0; j < columns2; j = j + 1)
//        {
//            resultantMatrix[i][j] = 0;
//            for (int k = 0; k < columns1; k=k+1)
//            {
//                resultantMatrix[i][j] = resultantMatrix[i][j] + matrix1[i][k] * matrix2[k][j];
//            }
//        }
//    }
//    return resultantMatrix;
//}
//
//void deleteMatrix(int ** matrix, int rows, int columns) 
//{
//    for (int i = 0; i < columns; i=i+1)
//    {
//        delete matrix[i];
//    }
//    delete matrix;
//}
//
//void multiplyMatricesApp()
//{
//    const int rows1 = 2, columns1 = 2;
//    const int rows2 = 2, columns2 = 2;
//    int matrix1[rows1][columns1] = { { 1, 1 },{ 2, 2 } };
//    int matrix2[rows2][columns2] = { { 1, 1 },{ 2, 2 } };
//    int ** resultantMatrix;
//    int rows3, columns3;
//    if (columns1 == rows2)
//    {
//        resultantMatrix = multiplyMatrices(matrix1,rows1,columns1, matrix2, rows2, columns2,&rows3,&columns3);
//    } 
//    deleteMatrix(resultantMatrix, rows3, columns3);
//}
//
//int main()
//{
//    multiplyMatricesApp();
//    cout << endl;
//    return 0;
//}