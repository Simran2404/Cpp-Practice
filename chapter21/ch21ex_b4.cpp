/*Write a program to receive a 8 - bit number into a variable and then
exchange its higher 4 bits with lower 4 bits.*/

#include <iostream>
using namespace std;

typedef unsigned char u8;

int checkbits(u8 x)
{

    u8 a = 0xF0;
    u8 b = 0x0F;

    u8 ans1 = x & a;
    u8 ans2 = x & b;

    u8 ans = (ans2 << 4) | (ans1 >> 4);
    printf("%x \n", ans);
}

int main()
{
    unsigned char x;
    checkbits(0x6b);
}