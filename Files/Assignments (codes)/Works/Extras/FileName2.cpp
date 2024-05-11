//#include<iostream>
//using namespace std;
//
//struct Set
//{
//    int* data;
//    int size;
//};
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
//int getIntersectionSetSize(Set a, Set b)
//{
//    int intersectionSetSize = 0;
//    for (int i = 0; i < a.size; i = i + 1)
//    {
//        if (isELementFound(a.data, a.size, b.data[i]))
//        {
//            intersectionSetSize = intersectionSetSize + 1;
//        }
//    }
//    return intersectionSetSize;
//}
//
//Set getIntersectionSet(Set a, Set b)
//{
//    Set intersectionSet;
//    intersectionSet.size = getIntersectionSetSize(a,b);
//    intersectionSet.data = new int[intersectionSet.size];
//    int i;
//    for (i = 0; i < intersectionSet.size;)
//    {
//        if (isELementFound(a.data, a.size, b.data[i]))
//        {
//            intersectionSet.data[i] = b.data[i];
//            i = i + 1;
//        }
//    }
//    return intersectionSet;
//}
//
//void getIntersectionSetApp()
//{
//    Set a, b;
//    a.data = new int[3];
//    a.size = 3;
//    b.data = new int[3];
//    b.size = 3;
//    for (int i = 0; i < 3; i = i + 1)
//    {
//        a.data[i] = i + 1;
//        b.data[i] = i + 3;
//    }
//    Set intersectionSet = getIntersectionSet(a,b);
//    printArrayElements(intersectionSet.data, intersectionSet.size);
//}
//
//int main()
//{
//    getIntersectionSetApp();
//    cout << endl;
//    return 0;
//}
