/*Write a program to receive a 8 - bit number into a variable and then if its 3rd and 5th bit are off. If these bits are found to be off then put them on.*/

#include <iostream>
using namespace std;

int setbits(unsigned char x)
{
    unsigned char ans1 = 1 << 3 - 1;
    unsigned char ans2 = 1 << 5 - 1;

    if (!((ans1 & x) && (ans2 & x)))
    {
        x = x ^ 0b10100;
        cout << (unsigned int)x;
    }
}

int main()
{
    unsigned char x = 8;
    setbits(x);
}