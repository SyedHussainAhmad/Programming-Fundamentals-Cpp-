//#include<iostream>
//using namespace std;
//
//void printArray(int* arr, int size)
//{
//    for (int i = 0; i < size; i = i + 1)
//    {
//        cout << arr[i] << ", ";
//    }
//}
//
//void swapElement(int arr[], int elementPosition1, int elementPosition2)
//{
//    int temp = arr[elementPosition1];
//    arr[elementPosition1] = arr[elementPosition2];
//    arr[elementPosition2] = temp;
//}
//
//void getSortedArray(int* arr, int size)
//{
//    for (int i = 0; i < size - 1; i++)
//    {
//        for (int j = i + 1; j < size; j++)
//        {
//            if (arr[j] < arr[i])
//            {
//                swapElement(arr, i, j);
//            }
//        }
//    }
//}
//
//void sortArrayApp()
//{
//    int numberList[5] = { 2,6,9,4,6 };
//    getSortedArray(numberList, 5);
//    printArray(numberList,5);
//}
//
//int main()
//{
//    sortArrayApp();
//    cout << endl;
//    return 0;
//}