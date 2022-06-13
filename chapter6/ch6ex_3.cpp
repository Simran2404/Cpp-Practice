/*Write a program to add first seven terms of the following series
using a for loop:*/

#include <iostream>
#include <cmath>
using namespace std;

float fact(float n)
{
    int factor = 1;

    for (int i = 1; i <= n; i++)
    {
        factor = factor * i;
    }
    return factor;
}

float func(int n, float *op)
{
    for (int i = 1; i <= n; i++)
    {
        float num = i;
        float den = fact(i);
        *op = *op + num / den;
    }
}

int main()
{
    int n = 7;
    float op = 0;
    func(n, &op);
    cout << op;
    return 0;
}
