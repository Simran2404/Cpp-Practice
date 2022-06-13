// Write a program to receive an unsigned 16 - bit integer and then
// exchange the contents of its 2 bytes using bitwise operators.

#include <iostream>
using namespace std;

int swapbits(unsigned short x)
{
    printf("%x \n", x);
    unsigned short a = 0xFF;
    printf("a=%x \n", a);
    unsigned short b = 0xFF << 8;
    printf("b=%x \n", b);

    unsigned short ans1 = x & a;
    printf("ans1 = %x \n", ans1);
    unsigned short ans2 = x & b;
    printf("ans2 = %x \n", ans2);

    unsigned short ans = (ans2 >> 8) | (ans1 << 8);
    printf("%x \n", ans);
}

int main()
{
    unsigned short x;
    swapbits(54631);
}