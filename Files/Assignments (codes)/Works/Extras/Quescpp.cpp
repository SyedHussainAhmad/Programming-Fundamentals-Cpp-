//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int x, y;
//    cin >> x;
//
//    if (!cin.good())
//    {
//        cin.clear();
//        cin.ignore();
//        cin >> x; // --> Re Inputing number is it is not correct.
//    }
//
//    cout << "Jhenga laala!!\n";
//    cin >> y;
//
//    cout << x << ":" << y;
//    cout << endl;
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	float startingTime, noOfMinutes;
//	cout << "Enter the starting time of the call: ";
//	cin >> startingTime;
//	
//	cout << "Enter the number of minutes of the call: ";
//	cin >> noOfMinutes;
//
//	float startingTimeFractionalPart = startingTime - (int)startingTime;
//
//	if (startingTime < 24.0 && startingTimeFractionalPart < 60)
//	{
//		float noOfMinutesInHours = noOfMinutes / 60;
//		float noOfMinutesInHoursAndMinutes = ((noOfMinutesInHours - (int)noOfMinutesInHours) * 60) / 100;
//		noOfMinutesInHours = (int)noOfMinutesInHours + noOfMinutesInHoursAndMinutes;
//
//		float endingTime = startingTime + noOfMinutesInHours;
//
//		cout << endingTime << endl;
//
//		float totalAmount = 0;
//		float ratePerMinute;
//
//		if (startingTime < 7.0)
//		{
//			ratePerMinute = 0.12;
//			totalAmount = totalAmount + (ratePerMinute * noOfMinutes);
//		}
//
//		else if (startingTime <= 19.0)
//		{
//			ratePerMinute = 0.55;
//			totalAmount = totalAmount + (ratePerMinute * noOfMinutes);
//		}
//
//		else if (startingTime < 24.0)
//		{
//			ratePerMinute = 0.35;
//			totalAmount = totalAmount + (ratePerMinute * noOfMinutes);
//		}
//		cout << totalAmount;
//	}
//}

//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	cout << setw(30) << setfill('*') << "Kangaroo Math Competition" << setw(6) << '\n';
//	srand(time(0));
//
//
//	int num1, num2, num3;
//	num1 = 1 + rand() % 99999;
//	num2 = 1 + rand() % 99999;
//	num3 = num1 + num2;
//	cout << num3 << "\n";
//	cout << setfill(' ') << setw(10) << num1 << '\n';
//	cout << "+" << setw(9) << num2 << '\n';
//	cout << setfill('_') << setw(11) << '\n';
//	int num4;
//
//	cout << " \nHey Kido! enter your answer: ";
//	cin >> num4;
//	if (num4 == num3)
//	{
//		cout << " Your answer is correct: " << '\n';
//
//		cout << setfill(' ') << setw(10) << num1 << '\n';
//		cout << "+" << setw(9) << num2 << '\n';
//		cout << setfill('_') << setw(11) << '\n';
//		cout << setfill(' ') << setw(10) << num3;
//	}
//	else
//	{
//		cout << "OOPS! Your answer is incorrect: " << '\n';
//		cout << setfill(' ') << setw(10) << num1 << '\n';
//		cout << "+" << setw(9) << num2 << '\n';
//		cout << setfill('_') << setw(11) << '\n';
//		cout << setfill(' ') << setw(10) << num3;
//	}
//	cout << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int num;
//    cin >> num;
//    bool primeStatus = false;
//
//    if (num == 2)
//    {
//        primeStatus = true;
//    }
//    else 
//    {
//        primeStatus = true;
//        int div = 2;
//        while (primeStatus && div < num)
//        {
//            if (num%div == 0) 
//            {
//                primeStatus = false;
//            }
//            div = div + 1;
//        }
//    }
//
//    if (primeStatus)
//    {
//        cout << "It is prime.";
//    }
//    else 
//    {
//        cout << "It is not prime.";
//    }
//    cout << endl;
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    //char name[10] = "Ali";
//    //cin.getline(name, 10);
//
//    //char a[10], b[10];
//    //int x;
//    //cin >> x;
//    char a = 'A';
//    cout << a + 3 << endl;
//    char b = a + 3;
//    cout << b << endl;
//
//
//    cout << endl;
//    return 0;
//}

//'\0' = 0 --> Integral value: