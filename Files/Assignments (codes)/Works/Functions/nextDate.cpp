//#include<iostream>
//using namespace std;
//
//bool isLeapYear(int year)
//{
//    return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? true : false;
//}
//
//int findMonthDays(int year, int month)
//{
//    int noOfDays = 0;
//    if(month > 0 && month < 13)
//    {
//        if (month > 0 && month < 8 && month % 2 != 0 || month > 7 && month % 2 == 0)
//        {
//            noOfDays = 31;
//        }
//        else if (isLeapYear(year) && month == 2)
//        {
//            noOfDays = 29;
//        }
//        else if (month == 2)
//        {
//            noOfDays = 28;
//        }
//        else
//        {
//            noOfDays = 30;
//        }
//    }
//
//    return noOfDays;
//}
//
//bool validateDate(int year, int month,int day)
//{
//    return (month > 0 && month < 13 && day > findMonthDays(year, month)) ? true : false;
//}
//
//int findNextDateYear(int year,int month,int day)
//{
//    if (month == 12 && day == 31)
//    {
//        year = year + 1;
//    }
//    return year;
//}
//
//int findNextDateMonth(int year, int month, int day)
//{
//    return (day >= findMonthDays(year, month)) ? (month = month % 12 + 1) : month;
//}
//
//int findNextDateDay(int year,int month,int day)
//{
//    int noOfDays = findMonthDays(year, month);
//    day = day % noOfDays + 1;
//    return day;
//}
//
//void displayNextDate(int year, int month, int day)
//{
//    cout << findNextDateYear(year, month, day) << " " << findNextDateMonth(year, month, day) << " " << findNextDateDay(year, month, day);
//}
//
//void findNextDateApp()
//{
//    int year, month, day;
//    do
//    {
//        cout << "Enter the Date (Year, Month , Day): ";
//        cin >> year >> month >> day;
//    }
//    while (validateDate(year,month,day));
//
//    displayNextDate(year, month, day);
//}
//
//int main()
//{
//    findNextDateApp();
//    cout << endl;
//    return 0;
//}