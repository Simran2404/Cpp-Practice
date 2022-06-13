/*Write a program to receive a 8 - bit number into a variable and then if its 3rd and 5th bit are on.If these bits are found to be on then put them off.*/

#include <iostream>
using namespace std;

int setbits(unsigned char x)
{
    unsigned char ans1 = 1 << 3 - 1;
    unsigned char ans2 = 1 << 5 - 1;

    unsigned char ans = ans1 | ans2;
    if (((ans1 | ans2) & x) == ans)
    {
        x = x ^ 0b10100;
        cout << (unsigned int)x;
    }
}

int main()
{
    unsigned char x = 4;
    setbits(x);
}