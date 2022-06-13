/*Write a program to print out all Armstrong numbers between 1 and
500. If sum of cubes of each digit of the number is equal to the
number itself, then the number is called an Armstrong number. For
example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ).*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num = 0, original, digit, sum = 0;
    num = 153;
    cout << num << endl;
    original = num;
    while (num != 0)
    {
        digit = num % 10;
        int add = digit * digit * digit;
        //printf("add %f\n", pow(digit, 3));
        printf("add %.20f %d\n", pow(digit, 3), add);
        sum = sum + add;
        num = num / 10;
        cout << sum << endl;
    }

    cout << sum << endl;

    if (original == sum)
    {
        cout << "The number is armstrong!" << endl;
    }
    else
    {
        cout << "The number is not armstrong!" << endl;
    }

    return 0;
}
