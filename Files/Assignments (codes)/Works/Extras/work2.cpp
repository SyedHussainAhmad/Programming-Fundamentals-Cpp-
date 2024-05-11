
//Problem no 1:

#include<iostream>
using namespace std;
int main()
{   
    int num1, num2, range, noOfterms;
    cout << "Enter the first number of the range: ";
    cin >> num1;
    cout << "Enter the Last number of the range: ";
    cin >> num2;
    range = num1 + num2;
    noOfterms = (num2 - num1) + 1;
    cout << (range * noOfterms) / 2;
    cout << endl;
    return 0;
}


/*
//Problem no 7:
#include<iostream>
using namespace std;

int main()
{
    float noOfgallons, noOfMilesPerTank;
    cout << "Enter the number of gallons of gas a car hold: ";
    cin >> noOfgallons;
    cout << "Enter the number of miles driven on a full tank: ";
    cin >> noOfMilesPerTank;

    cout << noOfMilesPerTank/noOfgallons;
    cout << endl;
    return 0;
}
*/
/*
//Problem no 8:

#include<iostream>
using namespace std;

int main()
{
    int qty = 5, salesReps = 2;
    cout << (float)qty / salesReps;
    cout << endl;
    return 0;
}
*/

/*
//Problem no 2:
#include<iostream>
using namespace std;

int main()
{
    float item1 = 12.95;
    cout << "The price of item 1 is: " << item1 << "\n";
    float item2 = 24.95;
    cout << "The price of item 2 is: " << item2 << "\n";
    float item3 = 6.95;
    cout << "The price of item 3 is: " << item3 << "\n";
    float item4 = 14.95;
    cout << "The price of item 4 is: " << item4 << "\n";
    float item5 = 3.95;
    cout << "The price of item 5 is: " << item5 << "\n";

    float subTotal = item1 + item2 + item3 + item4 + item5;
    cout << "The subtotal of the sale is: " << subTotal << "\n";

    float salesTax = 0.06 * subTotal;
    cout << "The sales tax is: " << salesTax << "\n";

    float total = salesTax + subTotal;
    cout << "The total is: " << total << "\n";

    cout << endl;
    return 0;
}
*/

/*
//Problem no 3:
#include<iostream>
using namespace std;

int main()
{
    int age;
    double pay;
    char section;
    cin >> age >> pay >> section;
    cout << endl;
    return 0;
}
*/

/*
//Problem no 4:

#include<iostream>
using namespace std;

int main()
{
    cout << "Expression\t\tValue\n";
    cout << "28 / 4 - 2\t\t" << 28 / 4 - 2 << "\n";
    cout << "6 + 12 * 2 - 8\t\t" << 6 + 12 *2 - 8 << "\n";
    cout << "4 + 8 * 2\t\t" <<4 + 8 * 2 << "\n";
    cout << "6 + 17 % 3 - 2\t\t" <<6 + 17 % 3 - 2 << "\n";
    cout << "2 + 22 % (9 - 7)\t" <<2 + 22 % (9 - 7) << "\n";
    cout << "(8 + 7) * 2\t\t" <<(8 + 7) * 2 << "\n";
    cout << "(16 + 7) % 2 - 1\t" <<(16 + 7) % 2 - 1 << "\n";
    cout << "12 / (10 - 6)\t\t" <<12 / (10 - 6) << "\n";
    cout << "(19 - 3)*(2 + 2)/4\t" <<(19 - 3) * (2 + 2) / 4 << "\n";
    cout << "5 % 10 % 3\t\t" <<5%10%3 << "\n";

    cout << endl;
    return 0;
}
*/

/*
//Problem no 5:

#include<iostream>
#include <typeinfo> //-- > This library is added to use typeid() to get the datatype of the variable.

using namespace std;

int main()
{
    int units = 5;
    float mass = 10;
    double weight = mass * units;

    cout << typeid(units).name() << endl; // --> This statement will tell the datatype of the units variable.
    cout << typeid(mass).name() << endl; // --> This statement will tell the datatype of the mass variable.
    cout << typeid(weight).name() << endl; // --> This statement will tell the datatype of the weight variable.

    cout << endl;
    return 0;
}
*/

/*
//Problem no 6:

#include<iostream>
using namespace std;

int main()
{
    int a, b = 2;
    float c = 4.2;
    a = b * c;
    cout << a;
    cout << endl;
    return 0;
}
*/


//Problem no 10:

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    srand(time(0));
//    cout << "*****Kangaroo Math Competition*****\n";
//
//    int num1 = 100 + rand() % 999;
//    int num2 = 100 + rand() % 999;
//    int answer = num1 + num2;
//
//    cout << " \t" << num1 << "\n";
//    cout << "+\t" << num2 << "\n";
//    cout << "-------------\n";
//    cout << "Hey kido when you solve it in your mind -> Press Enter key to verify your answer: ";
//    cin.ignore();
//    cin.get();
//    cout << " \t" << answer;
//    cout << endl;
//    return 0;
//}


/*
//Problem no 9:

#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    float loanAmount;
    cout << "Enter the loan amount: ";
    cin >> loanAmount;
    
    float monthlyInterestRate;
    cout << "Enter the Monthly Interest Rate: ";
    cin >> monthlyInterestRate;

    float rate = monthlyInterestRate / 100;

    float noOfPayments;
    cout << "Enter the no of payments: ";
    cin >> noOfPayments;
    
    float rateAddOne = rate + 1;
    float monthlyPayment = (rate * pow(rateAddOne, noOfPayments) * loanAmount) / (pow(rateAddOne, noOfPayments) - 1);
    float amountPaidBack = monthlyPayment* noOfPayments;

    cout << "Loan Amount:\t\t" << "$" << loanAmount << "\n";
    cout << "Monthly Interest Rate:\t" << monthlyInterestRate << "%\n";
    cout << "Number of payments:\t" << "$" << noOfPayments << "\n";
    cout << "Monthly Payment:\t" << "$" << monthlyPayment << "\n";
    cout << "Amount paid back:\t" << "$" << amountPaidBack << "\n";
    cout << "Interest Paid:\t\t" << "$" << amountPaidBack - loanAmount << "\n";


    cout << endl;
    return 0;
}
*/