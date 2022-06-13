/*If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits. (Hint: Use the modulus
operator ‘%’)*/

#include <iostream>
using namespace std;

int main()
{
    int num, digit, sum = 0;
    cout << "Enter a five digit number: ";
    cin >> num;

    for (int i = 0; i < 5; i++)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    cout << "\nSum of digits is " << sum;
    return 0;
}
