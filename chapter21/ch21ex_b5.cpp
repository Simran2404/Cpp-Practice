/*Write a program to receive a 8 - bit number into a variable and then
set its odd bits to 1. */

#include <iostream>
using namespace std;

int setbits(unsigned char x)
{
    cout << ((1 | (1 << (3 - 1)) | (1 << (5 - 1)) | (1 << (7 - 1))) | x);
}

int main()
{
    unsigned char x = 10;
    setbits(x);
}