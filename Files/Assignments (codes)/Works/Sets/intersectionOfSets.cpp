//#include<iostream>
//using namespace std;
//
//void printArrayElements(int arr[], int size)
//{
//    for (int i = 0; i < size; i = i + 1)
//    {
//        cout << arr[i] << "  ";
//    }
//}
//
//bool isELementFound(int* arr, int size, int number)
//{
//    for (int i = 0; i < size; i = i + 1)
//    {
//        if (number == arr[i])
//        {
//            return true;
//        }
//    }
//    return false;
//}
//
//int getIntersectionSetSize(int* setA, int sizeA, int* setB)
//{
//    int intersectionSetSize = 0;
//    for (int i = 0; i < sizeA; i = i + 1)
//    {
//        if (isELementFound(setA, sizeA, setB[i]))
//        {
//            intersectionSetSize = intersectionSetSize + 1;
//        }
//    }
//    return intersectionSetSize;
//}
//
//int* getIntersectionSet(int* setA, int sizeA, int* setB, int sizeB, int* intersectionSetSize)
//{
//    *intersectionSetSize = getIntersectionSetSize(setA, sizeA, setB);
//    int* intersectionSet = new int[*intersectionSetSize];
//    int i;
//    for (i = 0; i < *intersectionSetSize;)
//    {
//        if (isELementFound(setA, sizeA, setB[i]))
//        {
//            intersectionSet[i] = setB[i];
//            i = i + 1;
//        }
//    }
//    return intersectionSet;
//}
//
//void getIntersectionSetApp()
//{
//    int setA[3] = { 4,3,2 };
//    int setB[4] = { 2,3,4,5 };
//
//    int intersectionSetSize = 0;
//    int * intersectionSet = getIntersectionSet(setA, 3, setB, 4, &intersectionSetSize);
//    printArrayElements(intersectionSet, intersectionSetSize);
//}
//
//int main()
//{
//    getIntersectionSetApp();
//    cout << endl;
//    return 0;
//}
