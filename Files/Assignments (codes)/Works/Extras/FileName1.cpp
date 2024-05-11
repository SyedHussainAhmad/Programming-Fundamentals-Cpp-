//#include<iostream>
//#include<fstream>
//using namespace std;
//
//struct Set
//{
//    int *data;
//    int size;
//    char name[15];
//};
//
//void printSet(int arr[], int size)
//{
//    cout << "{ ";
//    for (int i = 0; i < size; i = i + 1)
//    {
//        cout << arr[i] << "  ";
//    }
//    cout << "}";
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
//int getUnionSetSize(Set a, Set b)
//{
//    int unionSetSize = 0;
//    for (int i = 0; i < a.size; i = i + 1)
//    {
//        if (isELementFound(a.data, a.size, b.data[i]))
//        {
//            unionSetSize = unionSetSize + 1;
//        }
//    }
//    return unionSetSize;
//}
//
//Set getUnionSet(Set a, Set b)
//{
//    Set unionSet;
//    unionSet.size = a.size + b.size - getUnionSetSize(a,b);
//    unionSet.data = new int[unionSet.size];
//
//    int i;
//    for (i = 0; i < a.size; i = i + 1)
//    {
//        unionSet.data[i] = a.data[i];
//    }
//
//    for (int j = 0; i < unionSet.size; j = j + 1)
//    {
//        if (!isELementFound(a.data, a.size, b.data[j]))
//        {
//            unionSet.data[i] = b.data[j];
//            i = i + 1;
//        }
//    }
//    return unionSet;
//}
//
//void saveSet(Set set)
//{
//    ofstream stream;
//    stream.open("set.txt");
//    for (int i = 0; i < set.size; i++)
//    {
//        stream << set.data[i];
//    }
//    stream << "\n" << set.size;
//    stream.close();
//}
//
//void getUnionSetApp()
//{
//    Set a, b;
//    a.data = new int[3];
//    a.size = 3;
//    b.data = new int[3];
//    b.size = 3;
//    for (int i = 0; i < 3; i=i+1)
//    {
//        a.data[i] = i + 1;
//        b.data[i] = i + 4;
//    }
//    Set unionSet = getUnionSet(a,b);
//    saveSet(unionSet);
//    printSet(unionSet.data, unionSet.size);
//    delete[] a.data;
//    delete[] b.data;
//    delete[] unionSet.data;
//}
//
//int main()
//{
//    getUnionSetApp();
//    cout << endl;
//    return 0;
//}