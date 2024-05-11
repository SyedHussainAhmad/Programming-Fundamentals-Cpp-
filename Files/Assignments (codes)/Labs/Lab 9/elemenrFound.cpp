//#include<iostream>
//using namespace std;
//
//bool isElementFound(int arr[], int size, int number)
//{
//    for (int i = 0; i < size; i++)
//    {
//        if (arr[i] == number)
//        {
//            return true;
//        }
//    }
//    return false;
//}
//
//int findMissingElement(int * arr , int size)
//{
//    bool missingFlag = true;
//    int counter = 1;
//    while (missingFlag)
//    {
//        if (!(isElementFound(arr, size, counter)))
//        {
//            return counter;
//        }
//        counter = counter + 1;
//    }
//}
//
//void findMissingElementApp()
//{
//    int integerArray[4] = { -3,-4,-1,-1 };
//    cout << findMissingElement(integerArray,4);
//}
//
//int main()
//{
//    findMissingElementApp();
//    cout << endl;
//    return 0;
//}