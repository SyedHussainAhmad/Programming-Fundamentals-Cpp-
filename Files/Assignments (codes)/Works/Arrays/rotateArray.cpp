//#include<iostream>
//using namespace std;
//
//void printArray(int arr[], int size)
//{
//    for (int i = 0; i < size; i = i + 1)
//    {
//        cout << arr[i] << ", ";
//    }
//}
//
//void shiftArray(int arr[], int size)
//{
//    for (int i = size - 1; i >= 0; i = i-1)
//    {
//        arr[i] = arr[i-1];
//    }
//}
//
//void rotateArray(int arr[], int size , int k)
//{
//    for (int i = 0; i < k; i =i+1)
//    {
//        int temp = arr[size - 1];
//        shiftArray(arr,size);
//        arr[0] = temp;
//    }
//}
//
//void rotateArrayApp()
//{
//    int arr[7] = { 1,2,3,4,5,6,7 };
//    int size = 7, k = 3;
//    rotateArray(arr,  size,  k);
//    printArray(arr,size);
//}
//
//int main()
//{
//    rotateArrayApp();
//    cout << endl;
//    return 0;
//}