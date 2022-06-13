/*Write a program to print all prime numbers from 1 to 300. */

#include <iostream>
#include <math.h>
using namespace std;

int prime(int num)
{
    int flag = 0;
    for (int j = 2; j <= sqrt(num); j++)
    {
        if (num % j == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << num << endl;
    }
}

int main()
{
    cout << 1 << endl;
    cout << 2 << endl;
    for (int i = 3; i <= 300; i += 2)
    {
        prime(i);
    }
    return 0;
}
