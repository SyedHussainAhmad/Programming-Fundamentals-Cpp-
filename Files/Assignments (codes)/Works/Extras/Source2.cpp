/*
Class Work:

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float num = 243.1346378;

    double num2 = 1 / 3;
    cout << fixed << showpoint << setprecision(2) << num2 << '\n';
    cout << fixed << setprecision(2) << num2 << '\n';

    cout << scientific << num << "\n";
    cout << showbase << num << "\n";
    cout << endl;
    return 0;
}

*/

//Issues Related to IO Stream..
/*
//Problem no 1:
#include<iostream>
using namespace std;

int main()
{
    int x, y;
    char ch;
    //cout << "For x,y,ch\n";
    //cin >> x >> y >> ch;
    //cout << x << "\t" << y << "\t" << ch << "\n";

    //cout << "For ch,x,y\n";
    //cin >> ch >> x >> y;
    //cout << ch << "\t" << x << "\t" << y << "\n";

    //cout << "For x,,ch,y\n";
    //cin >> x >> ch >> y;
    //cout << x << "\t" << ch << "\t" << y << "\n";

    //cout << "For x,y and cin.ignore(ch)\n";
    //cin >> x >> y;
    //cin.get(ch);
    //cout << x << "\t" << y << "\t" << ch << "\n";

    cout << endl;
    return 0;
}
*/

//Selection Structure..
/*
//Problem no 2:

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    srand(time(0));
    cout << "*****Kangaroo Math Competition*****\n";

    int num1 = 1 + rand() % 99999;
    int num2 = 1 + rand() % 99999;
    int sum = num1 + num2, answer;

    cout << setw(10) << num1 << "\n" << "+" << setw(9) << num2 << "\n";
    cout << setw(10) << setfill('-') << "" << "\n";

    cout << "Hey kido Enter Your Answer: ";
    cin >> answer;

    if (answer != sum)
    {
        cout << "OOPs! Your answer is incorrect. Keep doing the hard work. You will crack it one day.";
    }

    else
    {
        cout << setw(10) << sum;
    }

    cout << endl;
    return 0;
}
*/

///*
//Problem no 3:
#include<iostream>
using namespace std;

int main()
{
    float startingTime, noOfMinutes, ratePerMinute;

    cout << "Enter the starting time of the call: ";
    cin >> startingTime;
    
    cout << "Enter the Number of Minutes of the call: ";
    cin >> noOfMinutes;

    float startingTimeFractionalPart = (startingTime - (int)startingTime) * 100;

    float noOfMinutesInHours = noOfMinutes / 60;
    float noOfMinutesFractionalPart = noOfMinutesInHours - (int)noOfMinutesInHours;


    if ((startingTime < 23.59 && noOfMinutesInHours < 23.59) && (startingTimeFractionalPart < 59 && noOfMinutesFractionalPart < 59))
    {

        if (startingTime < 6.59)
        {
            ratePerMinute = 0.12;
        }

        else if (startingTime < 19.0)
        {
            ratePerMinute = 0.55;
        }
        
        else
        {
            ratePerMinute = 0.35;
        }

        float charge = noOfMinutes * ratePerMinute;
        cout << charge;
    }


    cout << endl;
    return 0;
}
//*/

//Formatted IO:
/*
//Problem no 1:

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    unsigned short int cost, bagSize;
    float area;

    cout << "Enter the amount of fertilizer, in pounds, in one bag: ";
    cin >> bagSize;
    
    cout << "\nEnter the cost of " << bagSize << " in pounds, in one bag : ";
    cin >> cost;
    
    cout << "\nEnter the area in sqaure feet, that can be fertilized by one bag: ";
    cin >> area;

    cout << "The cost of fertilizer per pound is: "  << setw(3) << setfill('-') << "$" << bagSize / cost << "\n";
    cout << "The cost of fertilizing per square feet is: "  << setw(3) << setfill('-') << "$" << area / cost << "\n";


    cout << endl;
    return 0;
}

*/

/*
//Problem no 2;

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    char subject1, subject2, subject3, subject4;
    int creditHours, obtainedMarks;
    cout << "Details of Ist subject: \n";

    cout << left << setw(30) << setfill('_') << "Enter Name of subject" << ": ";
    cin >> subject1;
    
    cout << left << setw(30) << setfill('_') << "Enter Credit hours in " << subject1 << ": ";
    cin >> creditHours;
    
    cout << left << setw(30) << setfill('_') << "Enter Credit hours in " << subject1 << ": ";
    cin >> creditHours;


    cout << endl;
    return 0;
}
*/