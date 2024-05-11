//#include<iostream>
//using namespace std;
//
//bool isSortedAccendingly(int* arr, int size)
//{
//    for (int i = 0; i < size-1; i=i+1)
//    {
//        if (arr[i + 1] < arr[i])
//        {
//            return false;
//        }
//    }
//    return true;
//}
//
//bool isSortedDescendingly(int* arr, int size)
//{
//    for (int i = 0; i < size-1; i = i + 1)
//    {
//        if (arr[i + 1] > arr[i])
//        {
//            return false;
//        }
//    }
//    return true;
//}
//
//bool isSorted(int * arr, int size)
//{
//    return (isSortedAccendingly(arr, size) || isSortedDescendingly(arr, size)) ? true : false;
//}
//
//void isSortedApp()
//{
//    int numberList[8] = { 0,1,2,3,4,5,6,7 };
//    cout << (isSorted(numberList, 8)? "Yes, It is sorted." : "No, It is not sorted.");
//}
//
//int main()
//{
//    isSortedApp();
//    cout << endl;
//    return 0;
//}
