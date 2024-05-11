//#include<iostream>
//using namespace std;
//
//int findFabonacciSequence(int lastTerm)
//{
//    if (lastTerm == 1)
//    {
//        return 1;
//    }
//
//    int firstTerm = 0, secondTerm = 1,nextTerm = 1;
//
//    for (int i = 2; i < lastTerm; i=i+1)
//    {
//        nextTerm = firstTerm + secondTerm;
//        firstTerm = secondTerm;
//        secondTerm = nextTerm;
//    }
//    return nextTerm;
//}
//
//void findFabonacciSequenceApp()
//{
//    int lastTerm;
//    cout << "Enter the number of terms: ";
//    cin >> lastTerm;
//    cout << findFabonacciSequence(lastTerm);
//}
//
//int main()
//{
//    findFabonacciSequenceApp();
//    cout << endl;
//    return 0;
//}