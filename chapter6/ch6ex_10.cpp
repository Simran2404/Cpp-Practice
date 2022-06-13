/*Write a program to generate all Pythogorean Triplets with side
length less than or equal to 30.*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x, y, h;
    cout << "Enter x, and y" << endl;
    cin >> x >> y;

    if (x <= 30 && y <= 30 && h <= 30)
    {
        if (h * h == x * x + y * y)
        {
            cout << x << " " << y << " " << h << endl;
        }
    }

    return 0;
}
