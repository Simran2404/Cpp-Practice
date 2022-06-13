/*Consider an unsigned integer in which rightmost bit is numbered as 0. Write a function checkbits(x, p, n) 
which returns true if all "n" bits starting from position "p" are turned on.For example,
checkbits(x, 4, 3) will return true if bits 4, 3 and 2 are 1 in number x.*/

#include <iostream>
using namespace std;

int checkbits(int x, int p, int n)
{
    int ans, key = 1;
    int count = 0;

    for (int i = p - n; i < p; i++)
    {
        ans = 1 << i;
        if (ans & x)
        {
            count++;
        }
    }

    if (count == n)
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
    int n, p, x;
    checkbits(30, 5, 3);
}