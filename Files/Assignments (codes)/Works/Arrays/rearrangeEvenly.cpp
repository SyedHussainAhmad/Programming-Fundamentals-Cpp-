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
//void rearrangeElementsEvenly(int * arr, int size)
//{
//    for (int i = 0; i < size-1; i++)
//    {
//        for (int j = i+1; j < size; j++)
//        {
//            if (arr[j]%2 == 0)
//            {
//                swapElement(arr, i, j);
//            }
//        }
//    }
//}
//
//void rearrangeElementsEvenlyApp()
//{
//    int numberList[4] = { 3,1,2,4 };
//    rearrangeElementsEvenly(numberList,4);
//    printArray(numberList, 4);
//}
//
//int main()
//{
//    rearrangeElementsEvenlyApp();
//    cout << endl;
//    return 0;
//}