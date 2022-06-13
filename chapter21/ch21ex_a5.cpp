/*The time field in a structure is 2 bytes long. Distribution of different
bits which account for hours, minutes and seconds is given in Figure
21.11. Write a function which would receive the 2-byte time and
return to the calling function, the hours, minutes and seconds.*/

#include <iostream>
using namespace std;

int setbits(unsigned short time, int hours, unsigned short minutes, unsigned short seconds)
{
    seconds = time & 0b11111;
    minutes = time & 0b11111100000;
    hours = time & 0b1111100000000000;

    int ans1 = seconds;
    int ans2 = minutes >> 5;
    int ans3 = hours >> 11;

    cout << "The number of seconds are: " << ans1 << endl;
    cout << "The number of minutes are: " << ans2 << endl;
    cout << "The number of hours are: " << ans3 << endl;
}

int main()
{
    unsigned short time, minutes, seconds;
    int hours;
    setbits(0b0011101111010001, hours, minutes, seconds);
}