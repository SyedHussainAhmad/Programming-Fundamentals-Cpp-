/*
//Problem # 1:

#include<iostream>
using namespace std;

int main()
{
    cout << "BBBBBB      JJJJJ       AAAAA       RRRRR       N    N     EEEEE\n";
    cout << "B     B        J        A   A       R   R       NN   N     E    \n";
    cout << "BBBBBB         J        AAAAA       RRRRR       N N  N     EEE  \n";
    cout << "B     B     J  J        A   A       R R         N  N N     E    \n";
    cout << "BBBBBB      JJJJ        A   A       R   R       N   NN     EEEEE\n";
    cout << endl;
    return 0;
}
*/

/*
//Problem # 2:

#include<iostream>
using namespace std;

int main()
{
    cout << "  \" \n";
    cout << " \"\"\"\n";
    cout << "\"\"\"\"\"\n";
    cout << " \"\"\"\n";
    cout << "  \" \n";
    cout << endl;
    return 0;
}
*/

/*
//Problem # 3:

#include<iostream>
using namespace std;

int main()
{
    signed int quizMarks;
    signed int testMarks;
    short int noOfStudents;
    short int noOfMiles;
    float averageSpeed;
    cout << endl;
    return 0;
}
*/

/*
//Problem # 4:

#include<iostream>
using namespace std;

int main()
{
    
    cout << "Integer    Square    Cube\n";
    cout <<  0 << "          " << 0 << "         " << 0 << "\n";
    cout <<  1 << "          " << 1*1 << "         " << 1*1*1 << "\n";
    cout <<  2 << "          " << 2*2 << "         " << 2*2*2 << "\n";
    cout <<  3 << "          " << 3*3 << "         " << 3*3*3 << "\n";
    cout <<  4 << "          " << 4*4 << "        " << 4*4*4 << "\n";
    cout <<  5 << "          " << 5*5 << "        " << 5*5*5 << "\n";
    cout << endl;
    return 0;
}
*/

/*
//Problem # 5:

#include<iostream>
using namespace std;

int main()
{
    signed int discountedPrice;
    short int noOfJuice;
    signed int highestTestScore;
    short int noOfMiles;
    cout << endl;
    return 0;
}
*/

/*
//Problem # 6:

#include<iostream>
using namespace std;

int main()
{
    float speed = 9.5;
    short int time = 10;
    float distance = speed * time;
    cout << distance;
    cout << endl;
    return 0;
}
*/

/*
//Problem # 7:

#include<iostream>
using namespace std;

int main()
{
    float force = 172.5;
    float area = 27.5;
    float pressure = area/force;
    cout << pressure;
    cout << endl;
    return 0;
}
*/

/*
//Problem # 8:

#include<iostream>
using namespace std;

int main()
{
    short int value1 = 28;
    short int value2 = 32;
    short int value3 = 37;
    short int value4 = 24;
    short int value5 = 33;
    float sum = value1 + value2 + value3 + value4 + value5;
    cout << sum / 5;
    cout << endl;
    return 0;
}
*/

/*
//Problem # 9:

#include<iostream>
using namespace std;

int main()
{
    short int num = 28346;

    short int remainder = num / 10000;
    num = num % 10000;
    cout << remainder << "   ";

    remainder = num / 1000;
    num = num % 1000;
    cout << remainder << "   ";
    
    remainder = num / 100;
    num = num % 100;
    cout << remainder << "   ";
    
    remainder = num / 10;
    num = num % 10;
    cout << remainder << "   " << num;

    cout << endl;
    return 0; 
}
*/

/*
//Problem # 10:

#include<iostream>
using namespace std;

int main()
{   
    float payAmount = 1700.0;
    short int payPeriods = 26;
    float annualPay = payAmount * payPeriods;
    cout << annualPay;
    cout << endl;
    return 0;
}
*/

/*
//Problem # 11:

#include<iostream>
using namespace std;

int main()
{
    short int oneMetricTon = 2205;
    float amountOfRiceInBag = 100;
    float numberOfBags = oneMetricTon / amountOfRiceInBag;
    cout << numberOfBags;
    cout << endl;
    return 0;
}
*/

/*
//Problem # 12:

#include<iostream>
using namespace std;

int main()
{
    cout << 389767 / 43560.0;
    cout << endl;
    return 0;
}
*/

/*
//Problem # 13:

#include<iostream>
using namespace std;

int main()
{
    float mealCost = 44.50;
    float tax = (6.75 / 100) * mealCost;
    float taxedBill = mealCost + tax;
    float tip = 0.15 * taxedBill;
    float totalBill = mealCost + tax + tip;

    cout << "Cost: " << mealCost << "\n";
    cout << "Tax: " << tax << "\n";
    cout << "Tip: " << tip << "\n";
    cout << "Total Bill: " << totalBill;

    cout << endl;
    return 0;
}
*/

/*
//Problem # 14:

#include<iostream>
using namespace std;

int main()
{
    float mass1 = 10000;
    float mass2 = 10000;
    float distance = 1;
    float K = 0.000000000067;
    float squaredDistance = distance * distance;
    float force = (K * mass1 * mass2) / squaredDistance;
    cout << force;
    cout << endl;
    return 0;
}
*/

/*
//Problem # 15:

#include<iostream>
using namespace std;

int main()
{
    float radius = 5;
    cout << "Diameter: " << 2 * radius << "\n" << "Circumference: " << 2 * 3.14159 * radius;
    cout << endl;
    return 0;
}
*/

/*
//Problem # 16:

#include<iostream>
using namespace std;

int main()
{
    short int surveyedCustomers = 12467;
    short int customersWhoPurchased = .14 * surveyedCustomers;
    short int customersWhoPurchasedCitrus = .64 * customersWhoPurchased;
    cout << "The customers who purchased one or more drink: " << customersWhoPurchased << "\n";
    cout << "Customers who prefered citrus flavor: " << customersWhoPurchasedCitrus;
    cout << endl;
    return 0;
}
*/

/*
//Problem # 17:

#include<iostream>
using namespace std;

int main()
{
    short int time = 9630;

    short int hours = time / 3600;
    time = time % 3600;

    short int min = time / 60;
    time = time % 60;

    cout << hours << ":" << min << ":" << time;
    cout << endl;
    return 0;
}
*/