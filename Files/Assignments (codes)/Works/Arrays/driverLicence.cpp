//#include<iostream>
//using namespace std;
//
//void checkDriverLicenceAnswers(int arr[], int size)
//{
//    char userInput;
//    int count = 0;
//    for (int i = 0; i < 20; i = i + 1)
//    {
//        cout << "Enter " << i + 1 << " Answer: ";
//        cin >> userInput;
//        if (userInput != arr[i])
//        {
//            cout << "Your answer is incorrect\n";
//            count = count + 1;
//        }
//    }
//    cout << "Number of incorrect answers are: " << count;
//}
//
//void checkDriverLicenceAnswersApp()
//{
//    int answers[20] = { 'A',68,65,65,67,65,66,65,67,68,66,67,68,65,68,67,67,66,68,65};
//    checkDriverLicenceAnswers(answers, 20);
//}
//
//int main()
//{
//    checkDriverLicenceAnswersApp();
//    cout << endl;
//    return 0;
//}