/*Write a program to print 24 hours of day with suitable suffixes like
    AM, PM, Noon and Midnight.*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float time;
    cout << "Enter the time of the day:" << endl;
    cin >> time;

    if (time > 0 && time < 12)
    {
        cout << time << " "
             << "AM " << endl;
    }

    if (time > 12 && time < 23.59)
    {
        cout << time << " "
             << "PM" << endl;
    }

    if (time == 12)
    {
        cout << time << "Noon" << endl;
    }

    if (time == 0)
    {
        cout << time << "Midnight" << endl;
    }

    return 0;
}
