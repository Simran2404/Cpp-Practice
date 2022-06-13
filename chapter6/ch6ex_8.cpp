/*When interest compounds q times per year at an annual rate of
r % for n years, the principal p compounds to an amount a as per
the following formula
a = p ( 1 + r / q ) nq
Write a program to read 10 sets of p, r, n & q and calculate the
corresponding as.*/

#include <iostream>
#include <math.h>
using namespace std;

void amount(float r, int q, int p, int n, float *a)
{
    *a = p * pow((1 + (r / q)), (n * q));
}

int main()
{
    float r = 3.4;
    int p = 200;
    int n = 3;
    float a = 0;
    int q = 2;

    amount(r, q, p, n, &a);
    cout << a;
    return 0;
}
