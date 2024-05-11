#include<iostream>
#include<cmath>
using namespace std;

float calculateDistance(int x1,int y1, int x2, int y2)
{
    return sqrt((((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))));
}

float calculateRadius(int x1,int y1, int x2, int y2)
{
    return calculateDistance(x1, y1, x2, y2);
}

float calculateCircumfernce(int x1,int y1, int x2, int y2)
{
    float radius = calculateDistance(x1, y1, x2, y2);
    float circumference = 3.14 * 2 * radius;
    return circumference;
}

int calculateArea(int x1,int y1, int x2, int y2)
{
    float radius = calculateDistance(x1, y1, x2, y2);
    float area = 3.14 * radius * radius;
    return area;
}

void doCircleCalculationsApp()
{
    int x1, y1, x2, y2;
    cout << "Enter center x: ";
    cin >> x1;
    cout << "Enter center y: ";
    cin >> y1;
    cout << "Enter point x: ";
    cin >> x2;
    cout << "Enter point y: ";
    cin >> y2;

    int check;
    cout << "\nPress 1 to calculate distance: ";
    cout << "\nPress 2 to calculate radius: ";
    cout << "\nPress 3 to calculate circumference: ";
    cout << "\nPress 4 to calculate area: ";
    cout << "\nPress any other key to exit: ";
    cin >> check;
    if (check == 1)
    {
        cout << calculateDistance(x1, y1, x2, y2);
    }
    else if (check == 2)
    {
        cout << calculateRadius(x1, y1, x2, y2);
    }
    else if (check == 3)
    {
        cout << calculateCircumfernce(x1, y1, x2, y2);
    }
    else if (check == 4)
    {
        cout << calculateArea(x1, y1, x2, y2);
    }
    else
    {
        exit(0);
    }
}

int main()
{
    doCircleCalculationsApp();
    cout << endl;
    return 0;
}