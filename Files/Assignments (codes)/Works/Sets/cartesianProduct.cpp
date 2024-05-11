//#include<iostream>
//using namespace std;
//
//void printCartesianSet(int arr[], int size)
//{
//    cout << "{ ";
//    for (int i = 0,j=0; i < size; i = i + 2)
//    {
//        cout << "( ";
//        for (int k = j + 2; j < k; j=j+1)
//        {
//            cout << arr[j];
//            if (!(j == (k - 1)))
//            {
//                cout << ',';
//            }
//        }
//        cout << " )";
//        if (!(i == size - 2))
//        {
//            cout << " , ";
//        }
//    }
//    cout << " }";
//}
//
//int * getCartesianSet(int* setA, int sizeA, int* setB, int sizeB, int cartesianSetSize)
//{
//    int* cartesianSet = new int[cartesianSetSize];
//
//    for (int i = 0,j=1,k=0; i < sizeA; i=i+1)
//    {
//        for (int l=0; l < sizeB; j=j+2,k=k+2,l=l+1)
//        {
//            cartesianSet[j] = setB[l];
//            cartesianSet[k] = setA[i];
//        }
//    }
//    return cartesianSet;
//}
//
//void getCartesianSetApp()
//{
//    const int sizeA = 3;
//    const int sizeB = 4;
//    int setA[sizeA] = { 4,3,2 };
//    int setB[sizeB] = { 2,3,4,5 };
//
//    int cartesianSetSize = sizeA*sizeB*2;
//    int * intersectionSet = getCartesianSet(setA, 3, setB, 4, cartesianSetSize);
//    printCartesianSet(intersectionSet, cartesianSetSize);
//}
//
//int main()
//{
//    getCartesianSetApp();
//    cout << endl;
//    return 0;
//}
