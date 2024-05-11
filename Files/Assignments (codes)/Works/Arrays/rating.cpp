//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//void getRatingApp()
//{
//    int freqCount[10] = {0,0,0,0,0,0,0,0,0,0};
//    int rating;
//    for (int i = 1; i < 40; i = i + 1)
//    {
//        cin >> rating;
//        freqCount[rating - 1] = freqCount[rating - 1] + 1;
//    }
//
//    cout << left << setw(10) << "Rating"  << setw(10) << "Frequency\n";
//
//    for (int i = 0; i < 10; i++)
//    {
//        cout << left << setw(10) << i+1  << setw(10) << freqCount[i] << "\n";
//    }
//}
//
//int main()
//{
//    getRatingApp();
//    cout << endl;
//    return 0;
//}


//By My Method:

//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//
//int getFrequencyCount(int arr[], int size, int value)
//{
//    int frequency = 0;
//    for (int i = 0; i < size; i= i + 1)
//    {
//        if (arr[i] == value)
//        {
//            frequency = frequency + 1;
//        }
//    }
//    return frequency;
//}
//void getRatingApp()
//{
//    int ratingArray[4];
//    for (int i = 0; i < 4; i= i + 1)
//    {
//        cin >> ratingArray[i];
//    }
//
//    cout << left << setw(10) << "Rating" << setw(10) << "Frequency\n";
//
//    for (int i = 0; i < 10; i++)
//    {
//        cout << left << setw(10) << i + 1 << setw(10) << getFrequencyCount(ratingArray,4,i) << "\n";
//    }
//}
//
//int main()
//{
//    getRatingApp();
//    cout << endl;
//    return 0;
//}