/*Write a function to compute the greatest common divisor given by
Euclid’s algorithm, exemplified for J = 1980, K = 1617 as follows:
1980 / 1617 = 1 1980 – 1 * 1617 = 363
1617 / 363 = 4 1617 – 4 * 363 = 165
363 / 165 = 2 363 – 2 * 165 = 33
5 / 33 = 5 165 – 5 * 33 = 0
Thus, the greatest common divisor is 33.*/

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    int j = 1980;
    int k = 1617;

    while (k != 0)
    {
        int rem = j % k;
        j = k;
        k = rem;
    }

    cout << "The greatest commom divisor is: \n"
         << j;
    return 0;
}