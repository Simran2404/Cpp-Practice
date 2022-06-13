/*In an inter-college competition, various sports like cricket, basketball, football, hockey, lawn tennis, table tennis, carom and
chess are played between different colleges. The information regarding the games won by a particular college is stored in bit
numbers 0, 1, 2, 3, 4, 5, 6, 7 and 8, respectively of an integer variable called game. The college that wins in 5 or more than 5
games is awarded the Champion of Champions trophy. If a number representing the bit pattern mentioned above is entered through
the keyboard then write a program to find out whether the college won the Champion of the Champions trophy or not, along with the
names of the games won by the college.*/

#include <iostream>
using namespace std;

int checkbits(int x)
{
    int count = 0;

    if (0 & x)
    {
        count++;
        cout << "Cricket" << endl;
    }
    if (1 & x)
    {
        count++;
        cout << "Basketball" << endl;
    }
    if ((1 << 2) & x)
    {
        count++;
        cout << "Football" << endl;
    }
    if ((1 << 3) & x)
    {
        count++;
        cout << "Hockey" << endl;
    }
    if ((1 << 4) & x)
    {
        count++;
        cout << "Lawn Tennis" << endl;
    }
    if ((1 << 5) & x)
    {
        count++;
        cout << "Table Tennis" << endl;
    }
    if ((1 << 6) & x)
    {
        count++;
        cout << "Carom" << endl;
    }
    if ((1 << 7) & x)
    {
        count++;
        cout << "Chess" << endl;
    }

    if (count >= 5)
    {
        cout << "yes, the college won the championship trophy!" << endl;
    }
}

int main()
{
    int x;
    checkbits(63);
}
