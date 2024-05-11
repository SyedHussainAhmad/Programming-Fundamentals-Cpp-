//#include<iostream>
//using namespace std;
//
//bool isLeaderElement(int arr[], int position, int size, int element)
//{
//    for (int i = position; i < size; i = i + 1)
//    {
//        if (element<arr[i])
//        {
//            return false;
//        }
//    }
//    return true;
//}
//
//void printLeaderElements(int*arr, int size)
//{
//    for (int i = 0; i < size; i=i+1)
//    {
//        if (isLeaderElement(arr,i,size,arr[i]))
//        {
//            cout << arr[i] << '\n';
//        }
//    }
//}
//
//void printLeaderElementsApp()
//{
//    int numberList[6] = {6,7,4,3,5,2};
//    printLeaderElements(numberList,6);
//}
//
//int main()
//{
//    printLeaderElementsApp();
//    cout << endl;
//    return 0;
//}