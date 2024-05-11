#include<iostream>
#include<iomanip>
using namespace std;

bool isAm(int hours)
{
    return hours > 12 ? false : true;
}


void printTimeIn24HoursFormat(int hours, int minutes, int seconds)
{
    cout << setfill('0') << setw(2) << hours << ":" << setw(2) << minutes << ":" << setw(2) << seconds;
}

void printTimeIn12HoursFormat(int hours, int minutes, int seconds)
{
    if (hours > 12)
    {
        hours = hours % 12;
        cout << setfill('0') << setw(2) << hours << ":" << setw(2) << minutes << ":" << setw(2) << seconds << " PM";
    }
    else
    {
        cout << setfill('0') << setw(2) << hours << ":" << setw(2) << minutes << ":" << setw(2) << seconds << " AM";
    }
}

void incrementHours(int* hours, int* minutes, int* seconds, int increment = 1)
{
    if (increment <= 0)
    {
        exit(0);
    }
    *hours = *hours + increment;
}

void incrementMinutes(int* hours, int* minutes, int* seconds, int increment = 1)
{
    if (increment <= 0)
    {
        exit(0);
    }

    *minutes = *minutes + increment;
    while (*minutes > 60)
    {
        *minutes = *minutes % 60;
        *hours = *hours + 1;
    }
}

void incrementSeconds(int* hours, int* minutes, int* seconds, int increment = 1)
{
    if (increment <= 0)
    {
        exit(0);
    }
    *seconds = *seconds + increment;
    while (*seconds > 60)
    {
        *seconds = *seconds % 60;
        *minutes = *minutes + 1;
        if (*minutes>60)
        {
            *minutes = *minutes % 60;
            *hours = *hours + 1;
        }
    }
}


int main()
{
    int hr1 = 16, min1 = 30, sec1 = 40;
    //int hr2 = 15, min2 = 2, sec2 = 45;
    //incrementHours(&hr1, &min1, &sec1, 150);
    //incrementMinutes(&hr1, &min1, &sec1, 150);
    incrementSeconds(&hr1, &min1, &sec1, 150);
    printTimeIn24HoursFormat(hr1,min1,sec1);
    //printTimeIn12HoursFormat(hr1, min1, sec1);
    cout << endl;
    return 0;
}