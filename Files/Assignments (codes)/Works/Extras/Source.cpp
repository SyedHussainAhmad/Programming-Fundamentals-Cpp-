//Question no 1:

//#include<iostream>
//#include<iomanip>
//
//using namespace std;
//
//int main()
//{
//    float noOfGallons;
//    cout << "Enter number of gallons of water consumed: ";
//    cin >> noOfGallons;
//
//    noOfGallons = noOfGallons / 100;
//
//    float waterCharge = .021 * noOfGallons;
//    float sewereCharge = .001 * noOfGallons;
//
//    float serviceCharge = (waterCharge + sewereCharge) * .02;
//    float totalCharge = waterCharge + sewereCharge + serviceCharge;
//
//    cout << left << fixed << setw(14) << setfill(' ') << "Water Charge" << ": " << "Rs" << right <<  setw(8) << setfill('*') << setprecision(2) << waterCharge << '\n';
//    cout << left << fixed << setw(14) << setfill(' ') << "Sewere Charge" << ": " << "Rs" << right <<  setw(8) << setfill('*') << setprecision(2) << sewereCharge << '\n';
//    cout << left << fixed << setw(14) << setfill(' ') << "Service Charge" << ": " << "Rs" << right <<  setw(8) << setfill('*') << setprecision(2) << serviceCharge << '\n';
//    cout << left << fixed << setw(14) << setfill(' ') << "Total Charge" << ": " << "Rs" << right <<  setw(8) << setfill('*') << setprecision(2) << totalCharge << '\n';
//
//    cout << endl;
//    return 0;
//}

// Question no 3:

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int totalNoOfRespondants, respndantsForQuestion1, respndantsForQuestion2, smallerNumber;
//    cout << "Enter total number of respondants: ";
//    cin >> totalNoOfRespondants;
//
//    cout << "Enter Answers for Question 1: ";
//    cin >> respndantsForQuestion1;
//
//    cout << "Enter Answers for Question 2: ";
//    cin >> respndantsForQuestion2;
//
//    if (respndantsForQuestion1 > respndantsForQuestion2)
//    {
//        smallerNumber = respndantsForQuestion2;
//    }
//
//    else if (respndantsForQuestion1 == respndantsForQuestion2)
//    {
//        smallerNumber = respndantsForQuestion2;
//    }
//
//    else
//    {
//        smallerNumber = respndantsForQuestion1;
//    }
//
//    cout << "Maximum no of respondants subscribing to both: " << smallerNumber << '\n';
//
//    if (totalNoOfRespondants < (respndantsForQuestion1 + respndantsForQuestion2))
//    {
//        smallerNumber = (respndantsForQuestion1 + respndantsForQuestion2) - totalNoOfRespondants;
//    }
//    else
//    {
//        smallerNumber = 0;
//    }
//    cout << "Minimum no of respondants subscribing to both: " << smallerNumber;
//   
//    cout << endl;
//    return 0;
//}

//Question 4:

#include<iostream>
using namespace std;

int main()
{
    int costForTask1, costForTask2, costForTask3, totalMinumumCost;

    cout << "Enter cost for task 1: ";
    cin >> costForTask1;

    cout << "Enter cost for tak 2: ";
    cin >> costForTask2;

    cout << "Enter cost for task 3: ";
    cin >> costForTask3;

    totalMinumumCost = costForTask2 - costForTask1;

    if (totalMinumumCost < 0)
    {
        totalMinumumCost = totalMinumumCost * -1;
    }

    cout << "The minimum total cost is: " << totalMinumumCost;
    cout << endl;
    return 0;
}

//Question no 2:

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    float value1, value2, value3;
//    float actualValue1, actualValue2, actualValue3;
//
//    cout << "Enter the First value: ";
//    cin >> value1;
//
//    cout << "Enter the Second value: ";
//    cin >> value2;
//
//    cout << "Enter the Third value: ";
//    cin >> value3;
//
//    actualValue3 = (value2 + value3 - value1) / 2;
//    actualValue1 = value3 - actualValue3;
//
//    actualValue2 = value2 - actualValue3;
//
//    float surfaceArea    = 2 * ((actualValue1 * actualValue3) + (actualValue2 * actualValue3) + (actualValue1 * actualValue2));
//    cout << actualValue1 << "\n";
//    cout << actualValue2 << "\n";
//    cout << actualValue3 << "\n";
//    
//    cout << surfaceArea;
//
//    cout << endl;
//    return 0;
//}

//#include<iostream>      
//using namespace std;
//
//int main()
//{
//    int num;
//    cout << "Enter four digit number: ";
//    cin >> num;
//    int base = 1000;
//    int remainder;
//    while (num > 10)
//    {
//        remainder = num / base;
//        num = num % base;
//        base = base / 10;
//        cout << remainder;
//        cout << '-';
//    }
//    remainder = num / base;
//    cout << remainder;
//    return 0;
//}

//Declare num,base,remainder
//Print "Enter the number: "
//Input num
//base = 1000
//
//Repeat Until (num.10)
//    remainder = num / base
//    num = num % base
//    base = base / 10
//    Print remainder, "-"
//
//remainder = num / base 
//Print remainder
