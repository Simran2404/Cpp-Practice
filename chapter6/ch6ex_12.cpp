/*Ramanujan number is the smallest number that can be expressed
    as sum of two cubes in two different ways. Write a program to print
    all such numbers up to a reasonable limit.*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    for (int a = 1; a < 30; a++)
    {
        for (int b = 1; b < 30; b++)
        {
            for (int c = 1; c < 30; c++)
            {
                for (int d = 1; d < 30; d++)
                {
                    if (a == b && b == c && c == d && a == c && b == d && a == d && b == c)
                    {
                        continue;
                    }
                    if (c * c * c + d * d * d == a * a * a + b * b * b)
                    {
                        cout << a << " " << b << " " << c << " " << d << endl;
                        cout << c * c * c + d * d * d << endl;
                    }
                }
            }
        }
    }
    return 0;
}
