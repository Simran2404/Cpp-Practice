/*The information about colors is to be stored in bits of a char variable called color.The bit number 0 to 6, each represent 7 colors
of a rainbow, i.e., bit 0 represents violet, 1 represents indigo, and so on.Write a program that asks the user to enter a number 
and based on this number it reports which colors in the rainbow do the number represents.*/

#include <iostream>
using namespace std;

int checkbits(int x)
{
    if (1 & x)
    {
        cout << "Violet" << endl;
    }
    if ((1 << 2) & x)
    {
        cout << "Indigo" << endl;
    }
    if ((1 << 3) & x)
    {
        cout << "Blue" << endl;
    }
    if ((1 << 4) & x)
    {
        cout << "Green" << endl;
    }
    if ((1 << 5) & x)
    {
        cout << "Yellow" << endl;
    }
    if ((1 << 6) & x)
    {
        cout << "Orange" << endl;
    }
    if ((1 << 7) & x)
    {
        cout << "Red" << endl;
    }
    return 0;
}

int main()
{
    int x;
    checkbits(12);
}
