// Write a program to scan a 8-bit number into a variable and check
// whether its 3rd, 6th and 7th bit is on.

#include <iostream>
using namespace std;

int checkbits(int x)
{
    if (((1 << 2) | (1 << 5) | (1 << 6)) & x) //if (100 & x)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}

int main()
{
    int x;
    checkbits(127);
}