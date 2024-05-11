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
//void getAccendinglySortedArray(int* arr, int size)
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
//void getAlternatelySortedArray(int* arr, int size)
//{
//    int minIndex = 0;
//    int maxIndex = size - 1;
//    int max = arr[size-1] + 1;
//    for (int i = 0; i < size - 1; i = i + 1)
//    {
//        if (i%2 == 0)
//        {
//            arr[i] = arr[i] + (arr[maxIndex] % max) * max;
//            maxIndex = maxIndex - 1;
//        }
//        else
//        {
//            arr[i] = arr[i] + (arr[minIndex] % max) * max;
//            minIndex = minIndex + 1;
//        }
//    }
//
//    for (int i = 0; i < size; i++)
//    {
//        arr[i] = arr[i] / max;
//    }
//}
//
//void sortArrayAlternatelyApp()
//{
//    int numberList[5] = { 1,2,3,4,5 };
//    getAccendinglySortedArray(numberList, 5);
//    getAlternatelySortedArray(numberList, 5);
//    printArray(numberList, 5);
//}
//
//int main()
//{
//    sortArrayAlternatelyApp();
//    cout << endl;
//    return 0;
//}