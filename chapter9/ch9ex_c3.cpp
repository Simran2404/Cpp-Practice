/*Write a C function to evaluate the series
sin( )   ( / 3!)  ( / 5!)  ( / 7!)  3 5 7 x x x x x
up to 10 terms.*/

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int fact(int n)
{
    int factor = 1;

    for (int i = 1; i <= n; i++)
    {
        factor = factor * i;
    }
    return factor;
}

void func(float x, float *sine)
{
    vector<int> output;

    for (int i = 1; i <= 10; i++)
    {
        float num = pow(x, 2 * i - 1);
        float den = fact(2 * i - 1);

        if (i % 2 != 0)
        {
            *sine = *sine + (num / den);
        }
        else
        {
            *sine = *sine - (num / den);
        }
    }
}

int main()
{
    float x = 3.14 / 2;
    float sine = 0;
    cout << fact(5) << endl;

    func(x, &sine);
    cout << sine;
    return 0;
}
