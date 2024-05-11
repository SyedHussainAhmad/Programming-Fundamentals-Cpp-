//#include<iostream>
//using namespace std;
//
//int getFriendRequestCount(int ages[], int N)
//{
//    int count = 0;
//
//    for (int i = 0; i < N; i = i+1)
//    {
//        for (int j = 0; j < N; j = j + 1)
//        {
//            if (!(ages[j] <= (0.5 * ages[i] + 7) || ages[j] > ages[i] || ages[j] > 100 && ages[i] < 100) && (ages[i] >= 1 && ages[i] <= 120 && ages[j] >= 1 && ages[j] <= 120 && i != j))
//            {
//                count = count + 1;
//            }
//        }
//    }
//    return count;
//}
//
//void getFriendRequestCountApp()
//{
//    int ages[5] = { 101, 56, 69, 48, 30 };
//    cout << getFriendRequestCount(ages, 5);
//}
//
//int main()
//{
//    getFriendRequestCountApp();
//    cout << endl;
//    return 0;
//}