/*Population of a town today is 100000. The population has increased
steadily at the rate of 10 % per year for last 10 years. Write a
program to determine the population at the end of each year in the
last decade.*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float r = 10;
    int p = 100000;
    int t = 10;

    for (int i = 0; i < t; i++)
    {
        float increase = 0.10 * p;
        p = p + increase;
        cout << p << endl;
    }

    return 0;
}
