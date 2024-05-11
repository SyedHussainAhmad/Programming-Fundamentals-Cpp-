//#include<iostream>
//using namespace std;
//
//void inputArray(int arr[], int size)
//{
//    for (int i = 0; i < size; i=i+1)
//    {
//        cin >> arr[i];
//    }
//}
//
//void matchLotteryNumbersApp()
//{
//    int lottery[5] = {1 + rand()% 8, 1 + rand() % 8 , 1 + rand() % 8 , 1 + rand() % 8 , 1 + rand() % 8 };
//    int userArray[5];
//    inputArray(userArray, 5);
//    bool lotteryFLag = true;
//    int i = 0;
//
//    while (i<5 && lotteryFLag)
//    {
//        if (lottery[i] != userArray[i])
//        {
//            lotteryFLag = false;
//        }
//        i = i + 1;
//    }
//
//    if (lotteryFLag)
//    {
//        cout << "You have won the prize: ";
//    }
//}
//
//int main()
//{
//    srand(time(0));
//    matchLotteryNumbersApp();
//    cout << endl;
//    return 0;
//}