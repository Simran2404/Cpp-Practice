/*If a five-digit number is input through the keyboard, write a
program to reverse the number.*/

#include <iostream>
using namespace std;

int main()
{
    int num, digit, rev = 0;
    cout << "Enter a five digit number: ";
    cin >> num;

    for (int i = 0; i < 5; i++)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    cout << "\nReverse of number is " << rev;
    return 0;
}
